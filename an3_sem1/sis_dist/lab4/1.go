package main

import (
	"fmt"
	"sync"
)

type Msg struct {
	Value int
	Done  bool
}

func node(id int, in <-chan Msg, out chan<- Msg,
	isLeader *bool, wg *sync.WaitGroup) {
	defer wg.Done()

	out <- Msg{Value: id, Done: false}

	for {
		mesaj := <-in

		if mesaj.Done {
			if mesaj.Value != id {
				out <- mesaj
			}
			return
		}

		if mesaj.Value > id {
			out <- mesaj
		} else if mesaj.Value == id {
			*isLeader = true
			out <- Msg{Value: id, Done: true}
		}
	}
}

func RingFlooding(ids []int) int {
	n := len(ids)
	if n == 0 {
		return -1
	}

	canale := make([]chan Msg, n)
	lideri := make([]bool, n)
	for i := 0; i < n; i++ {
		canale[i] = make(chan Msg, n)
	}

	var wg sync.WaitGroup
	wg.Add(n)
	for i := 0; i < n; i++ {
		go node(ids[i], canale[i], canale[(i+1)%n], &lideri[i], &wg)
	}
	wg.Wait()

	for i := 0; i < n; i++ {
		if lideri[i] {
			return ids[i]
		}
	}
	return -1
}

func main() {
	ids := []int{3, 8, 2, 5, 1}
	fmt.Println("Id-urile din inel:", ids)
	fmt.Println("Liderul:", RingFlooding(ids))
}
