package main

import (
	"fmt"
	"math/rand"
	"sort"
	"sync"
)

type LamportClock struct {
	counter int
}

func (l *LamportClock) Tick() {
	l.counter++
}

func (l *LamportClock) Send() {
	l.Tick()
}

func (l *LamportClock) Receive(ts int) {
	if ts > l.counter {
		l.counter = ts
	}
	l.Tick()
}

type Message struct {
	sender int
	ts     int
}

type Event struct {
	process          int
	internal_counter int
	kind             string
}

func less(a, b Event) bool {
	if a.internal_counter == b.internal_counter {
		return a.process < b.process
	}
	return a.internal_counter < b.internal_counter
}

func proces(id int, in <-chan Message, out chan<- Message,
	evenimente chan<- Event, wg *sync.WaitGroup) {
	defer wg.Done()
	ceas := LamportClock{}

	for runda := 0; runda < 3; runda++ {
		nrInterne := rand.Intn(3) + 1
		for i := 0; i < nrInterne; i++ {
			ceas.Tick()
			evenimente <- Event{id, ceas.counter, "internal"}
		}

		ceas.Send()
		mesaj := Message{sender: id, ts: ceas.counter}
		evenimente <- Event{id, ceas.counter, "send"}
		out <- mesaj

		mesaj = <-in
		ceas.Receive(mesaj.ts)
		evenimente <- Event{id, ceas.counter, "recv"}
	}
}

func main() {
	ch12 := make(chan Message, 1)
	ch23 := make(chan Message, 1)
	ch31 := make(chan Message, 1)
	evenimente := make(chan Event)

	var wg sync.WaitGroup
	wg.Add(3)
	go proces(1, ch31, ch12, evenimente, &wg)
	go proces(2, ch12, ch23, evenimente, &wg)
	go proces(3, ch23, ch31, evenimente, &wg)

	go func() {
		wg.Wait()
		close(evenimente)
	}()

	lista := []Event{}
	for eveniment := range evenimente {
		lista = append(lista, eveniment)
	}

	sort.Slice(lista, func(i, j int) bool {
		return less(lista[i], lista[j])
	})

	fmt.Println("Evenimente ordonate dupa ceasul Lamport:")
	for _, eveniment := range lista {
		fmt.Printf("P%d: contor = %d, tip = %s\n",
			eveniment.process, eveniment.internal_counter, eveniment.kind)
	}
}
