package main

import (
	"fmt"
	"math/rand"
	"time"
)

func robot1(ch1 chan <- string){
	time.Sleep(time.Duration(rand.Int()) * time.Millisecond)
	ch1 <- "A terminat robot1"
}

func robot2(ch2 chan <- string){

	time.Sleep(time.Duration(rand.Int()) * time.Millisecond)
	ch2 <- "A terminat robot2"
}

func main(){

	ch1 := make(chan string)
	ch2 := make(chan string)

	go robot1(ch1)
	go robot1(ch2)

	select{
	case msg := <- ch1:
		fmt.Print(msg)
	case msg := <- ch2:
		fmt.Print(msg)
	case <- time.After(200 * time.Millisecond):
		fmt.Println("Operation timed out")
	}

	

}
