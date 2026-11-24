package main

import (
	"fmt"
	"sync"
)

type MesajVot struct {
	Nod int
	Vot int
}

type Rezultat struct {
	Medie float64
	Vot   int
}

func nodVot(poz int, voturi []int, graf [][]int, canale [][]chan []MesajVot,
	rezultat *Rezultat, wg *sync.WaitGroup) {
	defer wg.Done()

	cunoscute := make(map[int]int)
	cunoscute[poz] = voturi[poz]
	mesaje := []MesajVot{{Nod: poz, Vot: voturi[poz]}}

	for runda := 0; runda < len(voturi)-1; runda++ {
		for _, vecin := range graf[poz] {
			canale[poz][vecin] <- mesaje
		}

		mesajeNoi := []MesajVot{}
		for _, vecin := range graf[poz] {
			primite := <-canale[vecin][poz]
			for _, mesaj := range primite {
				_, exista := cunoscute[mesaj.Nod]
				if !exista {
					cunoscute[mesaj.Nod] = mesaj.Vot
					mesajeNoi = append(mesajeNoi, mesaj)
				}
			}
		}
		mesaje = mesajeNoi
	}

	suma := 0
	for _, vot := range cunoscute {
		suma += vot
	}
	rezultat.Medie = float64(suma) / float64(len(cunoscute))
	rezultat.Vot = -1
	if rezultat.Medie > 0.5 {
		rezultat.Vot = 1
	} else if rezultat.Medie < 0.5 {
		rezultat.Vot = 0
	}
}

func MajorityFlooding(voturi []int, graf [][]int) []Rezultat {
	n := len(voturi)
	canale := make([][]chan []MesajVot, n)
	rezultate := make([]Rezultat, n)

	for i := 0; i < n; i++ {
		canale[i] = make([]chan []MesajVot, n)
		for _, vecin := range graf[i] {
			canale[i][vecin] = make(chan []MesajVot, 1)
		}
	}

	var wg sync.WaitGroup
	wg.Add(n)
	for i := 0; i < n; i++ {
		go nodVot(i, voturi, graf, canale, &rezultate[i], &wg)
	}
	wg.Wait()
	return rezultate
}

func main() {
	voturi := []int{1, 0, 1, 1, 0}
	graf := [][]int{
		{1, 2},
		{0, 2, 3},
		{0, 1},
		{1, 4},
		{3},
	}

	rezultate := MajorityFlooding(voturi, graf)
	for i, rezultat := range rezultate {
		fmt.Printf("Nodul %d: vot initial = %d, medie = %.2f, vot majoritar = %d\n",
			i, voturi[i], rezultat.Medie, rezultat.Vot)
	}
}
