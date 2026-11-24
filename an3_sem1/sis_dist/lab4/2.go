package main

import (
	"fmt"
	"sync"
)

func nodGraf(poz int, ids []int, graf [][]int, canale [][]chan int,
	lider *int, wg *sync.WaitGroup) {
	defer wg.Done()
	maxim := ids[poz]

	for runda := 0; runda < len(ids)-1; runda++ {
		for _, vecin := range graf[poz] {
			canale[poz][vecin] <- maxim
		}

		for _, vecin := range graf[poz] {
			mesaj := <-canale[vecin][poz]
			if mesaj > maxim {
				maxim = mesaj
			}
		}
	}
	*lider = maxim
}

func GraphFlooding(ids []int, graf [][]int) []int {
	n := len(ids)
	canale := make([][]chan int, n)
	lideri := make([]int, n)

	for i := 0; i < n; i++ {
		canale[i] = make([]chan int, n)
		for _, vecin := range graf[i] {
			canale[i][vecin] = make(chan int, 1)
		}
	}

	var wg sync.WaitGroup
	wg.Add(n)
	for i := 0; i < n; i++ {
		go nodGraf(i, ids, graf, canale, &lideri[i], &wg)
	}
	wg.Wait()
	return lideri
}

func main() {
	ids := []int{3, 8, 2, 5, 1}
	graf := [][]int{
		{1, 2},
		{0, 2, 3},
		{0, 1},
		{1, 4},
		{3},
	}

	lideri := GraphFlooding(ids, graf)
	for i := 0; i < len(ids); i++ {
		fmt.Printf("Nodul %d a ales liderul %d\n", ids[i], lideri[i])
	}
}
