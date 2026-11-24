package main

import (
	"fmt"
	"sync"
	"time"
)

func receive(ch <- chan string, wg *sync.WaitGroup) {
	defer wg.Done()
	time.Sleep(10000)
	mesaj := <- ch
	fmt.Println(mesaj)
}


func main(){

	var wg sync.WaitGroup
	wg.Add(1)
	ch := make(chan string)
	go receive(ch, &wg)
	ch <- "salut"

	defer close(ch)
	wg.Wait()

}

