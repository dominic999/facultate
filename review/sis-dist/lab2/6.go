package main

import (
	"fmt"
	"time"
)


func robot1(ch chan <- string){
	ch <- "1"
}

func robot2(ch chan <- string){
	ch <- "2"
}

func main(){

	ch := make(chan string)
	ch2 := make(chan string)
	defer close(ch)
	defer close(ch2)

	go robot1(ch)
	go robot2(ch2)

	select {
	case msg := <- ch:
		fmt.Println(msg)
	case msg := <- ch2:
		fmt.Println(msg)
	case <- time.After(200 * time.Second):
		fmt.Println("time out")
	}

}
