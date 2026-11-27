package main

import (
	"bufio"
	"fmt"
	"math/rand"
	"os"
	"sync"
	"time"
)

type Message struct {
	SenderID int
	Round    int
	Value    int
}

type Node struct {
	id          int
	x           int
	isByzantine bool
	inbox       chan Message
}

type Vot struct {
	majoritate int
	frecventa  int
}

func Broadcast(nodes []Node, mesaj Message) {
	for _, node := range nodes {
		node.inbox <- mesaj
	}
}

func MaliciousBcastState(nodes []Node, sender, value int) {
	Broadcast(nodes, Message{SenderID: sender, Round: 1, Value: 1 - value})
}

func MaliciousBcastTie(nodes []Node, sender int, rng *rand.Rand) {
	for _, node := range nodes {
		node.inbox <- Message{SenderID: sender, Round: 2, Value: rng.Intn(2)}
	}
}

func rundaVoturi(node Node, nodes []Node, rezultat *Vot, wg *sync.WaitGroup) {
	defer wg.Done()

	if node.isByzantine {
		MaliciousBcastState(nodes, node.id, node.x)
	} else {
		Broadcast(nodes, Message{SenderID: node.id, Round: 1, Value: node.x})
	}

	unu := 0
	for range nodes {
		mesaj := <-node.inbox
		unu += mesaj.Value
	}

	zero := len(nodes) - unu
	if unu > zero {
		*rezultat = Vot{majoritate: 1, frecventa: unu}
	} else {
		*rezultat = Vot{majoritate: 0, frecventa: zero}
	}
}

func ByzFlood(stari []int, s int, bizantine []int, rng *rand.Rand) (int, bool) {
	if len(stari) == 1 {
		return stari[0], true
	}

	nodes := make([]Node, len(stari))
	for i, valoare := range stari {
		nodes[i] = Node{id: i, x: valoare, inbox: make(chan Message, len(stari))}
	}
	for _, id := range bizantine {
		nodes[id].isByzantine = true
	}

	voturi := make([]Vot, len(nodes))
	prag := len(nodes)/2 + s
	for lider := 0; lider < s+2; lider++ {
		var wg sync.WaitGroup
		wg.Add(len(nodes))
		for i, node := range nodes {
			go rundaVoturi(node, nodes, &voturi[i], &wg)
		}
		wg.Wait()

		if nodes[lider].isByzantine {
			MaliciousBcastTie(nodes, lider, rng)
		} else {
			Broadcast(nodes, Message{SenderID: lider, Round: 2, Value: voturi[lider].majoritate})
		}

		for i := range nodes {
			tie := <-nodes[i].inbox
			if voturi[i].frecventa > prag {
				nodes[i].x = voturi[i].majoritate
			} else {
				nodes[i].x = tie.Value
			}
		}
	}

	consens := -1
	for _, node := range nodes {
		if node.isByzantine {
			continue
		}
		if consens != -1 && node.x != consens {
			return 0, false
		}
		consens = node.x
	}
	return consens, true
}

func main() {
	in := bufio.NewReader(os.Stdin)
	var n, s int
	if _, err := fmt.Fscan(in, &n, &s); err != nil || n < 1 || s < 0 || s > (n-1)/4 {
		fmt.Fprintln(os.Stderr, "Date invalide: este necesar n > 4s si s >= 0.")
		os.Exit(1)
	}

	stari := make([]int, n)
	for i := range stari {
		if _, err := fmt.Fscan(in, &stari[i]); err != nil || (stari[i] != 0 && stari[i] != 1) {
			fmt.Fprintf(os.Stderr, "Stare binara invalida pentru nodul %d.\n", i)
			os.Exit(1)
		}
	}

	rng := rand.New(rand.NewSource(time.Now().UnixNano()))
	bizantine := rng.Perm(n)[:s]
	consens, ok := ByzFlood(stari, s, bizantine, rng)
	if !ok {
		fmt.Fprintln(os.Stderr, "Nodurile corecte nu au ajuns la consens.")
		os.Exit(1)
	}
	fmt.Println(consens)
}
