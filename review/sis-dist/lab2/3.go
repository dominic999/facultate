package main

import (
	"fmt"
)

func send(ch chan <- string){
	ch <- "salut"
	ch <- "random"
}

func main(){

	ch := make(chan string)
	defer close(ch)
	go send(ch)
	mesaj1 := <- ch
	mesaj2 := <- ch
	fmt.Println(mesaj1)
	fmt.Println(mesaj2)

}
