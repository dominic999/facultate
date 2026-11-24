package main

import (
	"fmt"
	"sync"
)


func receive(ch <- chan string, wg *sync.WaitGroup){
	defer wg.Done()
	mesaj := <- ch
	fmt.Println(mesaj)
}

func send(ch chan <- string, wg *sync.WaitGroup){
	defer wg.Done()
	ch <- "salut"
}


func main(){

	ch := make(chan string)
	var wg sync.WaitGroup
	wg.Add(2)
	defer close(ch)
	go send(ch, &wg)
	go receive(ch, &wg)
	wg.Wait()
}
