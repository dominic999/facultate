package main

import (
	"fmt"
	"sync"
)

func send(canal chan <- string, wg *sync.WaitGroup){
	var mesaj string
	mesaj = "Merge"
	canal <- mesaj
}

func receive(canal <- chan string, wg *sync.WaitGroup)(string){
	mesaj := <- canal
	return mesaj
}

func main(){

	canal := make(chan string)
	wg := sync.WaitGroup{}
	go send(canal, &wg)
	mesaj := receive(canal, &wg)
	fmt.Print(mesaj)

}
