package main

import (
	"fmt"
	"math/rand"
)

type Message struct {
	SenderID int
	Round int // 1 pentru starea curenta , 2 pentru valoarea Tie
	Value int // 0 sau 1
}
type Node struct {
	id int
	x int // starea curenta x_i(t)
	s int
	n int // numarul de noduri din sistem
	isByzantine bool // comportamentul la iteratia curenta
	inbox chan Message
}

func MaliciousBcastState(nodes []Node, value, round, sender int) {
	msg := Message{SenderID: sender, 
			Round: round, Value: 1-value}
    for _, node := range nodes {
        node.inbox <- msg
    }
}

func MaliciousBcastTie(leader int, malicious bool) {
}

func ReadMessage(ch <- chan Message) Message {
	message := <- ch
	return message
}

func Broadcast(nodes []Node, value, round, sender int) Message {
	msg := Message{SenderID: sender, 
			Round: round, Value: value}

    for _, node := range nodes {
        node.inbox <- msg
    }

	return msg 
	
}

func main(){

	var n int
    fmt.Scan(&n)
	nodes := make([]Node, n)
	s := 0

    for i := range nodes {
        fmt.Scan(&nodes[i].x)
		nodes[i].n = n
		nodes[i].id = i
		isByz := rand.Intn(2)
		if isByz == 1 && s < n/4{
			s += 1
			nodes[i].isByzantine = true
		}
		nodes[i].inbox = make(chan Message, n)
    }


	//  asta este forul principal
	for iter := 0; iter < s + 2; iter++ {
		for _, node := range nodes {
			if node.isByzantine {
				MaliciousBcastState(nodes, node.x, iter, node.id)
			} else {
				Broadcast(nodes, node.x, iter, node.id)
			}
		}
		var maj int
		ones := 0
		zeroes := 0
		for _, node := range nodes {
			for range nodes {
				msg := ReadMessage(node.inbox)
				ones += 0 + msg.Value
				zeroes += 1 - msg.Value
				fmt.Println(node.id, msg.SenderID, msg.Value)
			}
		}
		if ones > zeroes{
			maj = 1
		}else {
			maj = 0
		}

		for _, node := range nodes {
			//NOTE asta inseamna ca eu sunt lider
			if iter == node.id { 
				Broadcast(nodes, maj, iter, iter)
			}else {
				msg := ReadMessage(node.inbox)
				if maj == 1 && ones > (n/2 + s){
					node.x = 1
				} else if maj == 1 && ones < (n/2 + s){
					node.x = msg.Value
				} else if maj == 0 && zeroes > (n/2+s){
					node.x = 0
				} else if maj == 0 && zeroes < (n/2 + s){
					node.x = msg.Value
				}
			}
		}
	}


}
