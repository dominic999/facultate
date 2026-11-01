package main

import (
	"fmt"
	"sync"
)

type Msg struct {
	Value int
	Done bool // liderul anunta ca a fost ales
}

// realizeaza operatiile interne nodului
func node(id int, in <-chan Msg, out chan <- Msg, 
	isLeader *bool , wg *sync.WaitGroup) {
	
	
	var mesaj_personal Msg
	mesaj_personal.Done = false
	mesaj_personal.Value =  id
	out <- mesaj_personal 

	mesaj := <- in

}

// returneaza id-ul liderului
func RingFlooding(ids []int) int { return -1 }

func main(){

}
