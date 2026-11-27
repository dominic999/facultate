package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
	"sync"
)

type Pozitie struct {
	X, Y float64
}

func distanta(a, b Pozitie) float64 {
	return math.Hypot(a.X-b.X, a.Y-b.Y)
}

func construiesteGraf(pozitii []Pozitie, raza float64) [][]int {
	graf := make([][]int, len(pozitii))
	for i, pozitie := range pozitii {
		for j := i + 1; j < len(pozitii); j++ {
			if distanta(pozitie, pozitii[j]) < raza {
				graf[i] = append(graf[i], j)
				graf[j] = append(graf[j], i)
			}
		}
	}
	return graf
}

func comprimaPozitii(pozitii []Pozitie, epsilon float64) []Pozitie {
	comprimate := make([]Pozitie, 0, len(pozitii))
	for _, pozitie := range pozitii {
		exista := false
		for _, pastrata := range comprimate {
			if distanta(pozitie, pastrata) <= epsilon {
				exista = true
				break
			}
		}
		if !exista {
			comprimate = append(comprimate, pozitie)
		}
	}
	return comprimate
}

func robot(id int, pozitie Pozitie, vecini []int, canale [][]chan Pozitie,
	rezultat *Pozitie, wg *sync.WaitGroup) {
	defer wg.Done()

	for _, vecin := range vecini {
		canale[id][vecin] <- pozitie
	}

	suma := pozitie
	for _, vecin := range vecini {
		p := <-canale[vecin][id]
		suma.X += p.X
		suma.Y += p.Y
	}

	numar := float64(len(vecini) + 1)
	*rezultat = Pozitie{X: suma.X / numar, Y: suma.Y / numar}
}

func Averaging(pozitii []Pozitie, raza, epsilon float64, maxIteratii int) ([]Pozitie, int) {
	pozitii = comprimaPozitii(pozitii, epsilon)
	canale := make([][]chan Pozitie, len(pozitii))
	for i := range canale {
		canale[i] = make([]chan Pozitie, len(pozitii))
		for j := range canale[i] {
			if i != j {
				canale[i][j] = make(chan Pozitie, 1)
			}
		}
	}

	iteratii := 0
	for len(pozitii) > 1 && iteratii < maxIteratii {
		graf := construiesteGraf(pozitii, raza)
		urmatoare := make([]Pozitie, len(pozitii))

		var wg sync.WaitGroup
		wg.Add(len(pozitii))
		for i, pozitie := range pozitii {
			go robot(i, pozitie, graf[i], canale, &urmatoare[i], &wg)
		}
		wg.Wait()

		pozitii = comprimaPozitii(urmatoare, epsilon)
		iteratii++
	}
	return pozitii, iteratii
}

func main() {
	const epsilon = 1e-6
	const maxIteratii = 1000
	raza := 20.0

	if len(os.Args) > 2 {
		fmt.Fprintln(os.Stderr, "Utilizare: go run . [raza] < input.txt")
		os.Exit(1)
	}
	if len(os.Args) == 2 {
		var err error
		raza, err = strconv.ParseFloat(os.Args[1], 64)
		if err != nil || !(raza > 0) || math.IsInf(raza, 0) {
			fmt.Fprintln(os.Stderr, "Raza trebuie sa fie un numar finit si pozitiv.")
			os.Exit(1)
		}
	}

	in := bufio.NewReader(os.Stdin)
	var n int
	if _, err := fmt.Fscan(in, &n); err != nil || n < 1 || n > 50 {
		fmt.Fprintln(os.Stderr, "Numarul de roboti trebuie sa fie intre 1 si 50.")
		os.Exit(1)
	}

	pozitii := make([]Pozitie, n)
	for i := range pozitii {
		p := &pozitii[i]
		if _, err := fmt.Fscan(in, &p.X, &p.Y); err != nil ||
			math.IsNaN(p.X) || math.IsNaN(p.Y) || math.IsInf(p.X, 0) || math.IsInf(p.Y, 0) {
			fmt.Fprintf(os.Stderr, "Coordonate invalide pentru robotul %d.\n", i+1)
			os.Exit(1)
		}
	}

	rezultate, iteratii := Averaging(pozitii, raza, epsilon, maxIteratii)
	fmt.Println("Iteratii:", iteratii)
	if len(rezultate) == 1 {
		fmt.Printf("Rendezvous: %.6f %.6f\n", rezultate[0].X, rezultate[0].Y)
		return
	}

	fmt.Println("Pozitii finale la limita de iteratii:")
	for _, pozitie := range rezultate {
		fmt.Printf("%.6f %.6f\n", pozitie.X, pozitie.Y)
	}
}
