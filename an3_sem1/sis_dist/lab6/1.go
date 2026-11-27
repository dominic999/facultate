package main

import (
	"bufio"
	"fmt"
	"maps"
	"math/rand"
	"os"
	"sort"
	"strconv"
	"strings"
	"sync"
	"time"
)

type Info struct {
	ID    int
	Value int
}

type Memory map[Info]struct{}

type Node struct {
	ID        int
	Neighbors []int
	M         Memory
}

func diametru(adj [][]int) int {
	diam := 0
	for start := range adj {
		dist := make([]int, len(adj))
		for i := range dist {
			dist[i] = -1
		}
		dist[start] = 0
		coada := []int{start}
		for i := 0; i < len(coada); i++ {
			nod := coada[i]
			for _, vecin := range adj[nod] {
				if dist[vecin] == -1 {
					dist[vecin] = dist[nod] + 1
					diam = max(diam, dist[vecin])
					coada = append(coada, vecin)
				}
			}
		}
		if len(coada) != len(adj) {
			return -1
		}
	}
	return diam
}

func nodFloodSet(nod Node, intrari []int, activi []bool, canale []chan Memory,
	urmatoare *Memory, wg *sync.WaitGroup) {
	defer wg.Done()

	for _, vecin := range nod.Neighbors {
		if activi[vecin] {
			canale[vecin] <- nod.M
		}
	}

	memorie := maps.Clone(nod.M)
	for _, sursa := range intrari {
		if activi[sursa] {
			maps.Copy(memorie, <-canale[nod.ID])
		}
	}
	*urmatoare = memorie
}

func FloodSet(adj [][]int, valori []int, s, diam int, rng *rand.Rand) (int, Memory, bool) {
	noduri := make([]Node, len(adj))
	intrari := make([][]int, len(adj))
	activi := make([]bool, len(adj))
	canale := make([]chan Memory, len(adj))

	for i, vecini := range adj {
		noduri[i] = Node{ID: i, Neighbors: vecini, M: Memory{Info{ID: i, Value: valori[i]}: {}}}
		activi[i] = true
		for _, vecin := range vecini {
			intrari[vecin] = append(intrari[vecin], i)
		}
	}
	for i := range canale {
		canale[i] = make(chan Memory, len(intrari[i]))
	}

	prag := (s + 1) * diam
	defecte := 0
	for t := 0; ; t++ {
		urmatoare := make([]Memory, len(noduri))
		var wg sync.WaitGroup
		wg.Add(len(noduri) - defecte)
		for i, nod := range noduri {
			if activi[i] {
				go nodFloodSet(nod, intrari[i], activi, canale, &urmatoare[i], &wg)
			}
		}
		wg.Wait()
		for i := range noduri {
			if activi[i] {
				noduri[i].M = urmatoare[i]
			}
		}

		if t > prag {
			var memorie Memory
			consens := true
			for i, nod := range noduri {
				if activi[i] {
					if memorie == nil {
						memorie = nod.M
					} else if !maps.Equal(memorie, nod.M) {
						consens = false
					}
				}
			}
			return t, memorie, consens
		}

		if defecte < s && rng.Intn(2) == 0 {
			candidati := make([]int, 0, len(noduri)-defecte)
			for i, activ := range activi {
				if activ {
					candidati = append(candidati, i)
				}
			}
			activi[candidati[rng.Intn(len(candidati))]] = false
			defecte++
		}
	}
}

func citesteLinie(scanner *bufio.Scanner) ([]int, error) {
	if !scanner.Scan() {
		if err := scanner.Err(); err != nil {
			return nil, err
		}
		return nil, fmt.Errorf("linie lipsa")
	}

	campuri := strings.Fields(scanner.Text())
	valori := make([]int, len(campuri))
	for i, camp := range campuri {
		valoare, err := strconv.Atoi(camp)
		if err != nil {
			return nil, err
		}
		valori[i] = valoare
	}
	return valori, nil
}

func citesteDate(scanner *bufio.Scanner) ([][]int, []int, int, error) {
	parametri, err := citesteLinie(scanner)
	if err != nil || len(parametri) != 2 {
		return nil, nil, 0, fmt.Errorf("prima linie trebuie sa contina n si s")
	}
	n, s := parametri[0], parametri[1]
	if n < 1 || s < 0 || s >= n {
		return nil, nil, 0, fmt.Errorf("este necesar 0 <= s < n")
	}

	valori, err := citesteLinie(scanner)
	if err != nil || len(valori) != n {
		return nil, nil, 0, fmt.Errorf("a doua linie trebuie sa contina %d token-uri", n)
	}

	adj := make([][]int, n)
	for i := range adj {
		vecini, err := citesteLinie(scanner)
		if err != nil {
			return nil, nil, 0, fmt.Errorf("lista nodului %d: %w", i, err)
		}
		vazut := make([]bool, n)
		for _, vecin := range vecini {
			if vecin < 0 || vecin >= n {
				return nil, nil, 0, fmt.Errorf("vecin invalid %d pentru nodul %d", vecin, i)
			}
			if vecin != i && !vazut[vecin] {
				adj[i] = append(adj[i], vecin)
				vazut[vecin] = true
			}
		}
	}
	return adj, valori, s, nil
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	adj, valori, s, err := citesteDate(scanner)
	if err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}

	diam := diametru(adj)
	if diam == -1 {
		fmt.Fprintln(os.Stderr, "Graful nu este tare conex.")
		os.Exit(1)
	}

	rng := rand.New(rand.NewSource(time.Now().UnixNano()))
	iteratie, memorie, consens := FloodSet(adj, valori, s, diam, rng)
	fmt.Println("Diametru:", diam)
	fmt.Println("Iteratia de oprire:", iteratie)

	perechi := make([]Info, 0, len(memorie))
	for info := range memorie {
		perechi = append(perechi, info)
	}
	sort.Slice(perechi, func(i, j int) bool {
		return perechi[i].ID < perechi[j].ID
	})
	for i, info := range perechi {
		if i > 0 {
			fmt.Print(" ")
		}
		fmt.Printf("(%d, %d)", info.ID, info.Value)
	}
	fmt.Println()
	if !consens {
		fmt.Fprintln(os.Stderr, "Nodurile active nu au ajuns la consens.")
	}
}
