package main

import (
	"fmt"
)

func f(ch chan int){
	ch <- 10000000
	ch <- 2000001
}

func main(){
	ch := make(chan int, 2)
	f(ch)
	i := <- ch
	j := <- ch
	fmt.Print(i, "\n")
	fmt.Print(j, "\n")

}
