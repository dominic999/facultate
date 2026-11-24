package main
import (
	"fmt"
)

func f(ch chan string){
	ch <- "salut"
}

func main(){
	ch := make(chan string)
	go f(ch)
	i := <- ch
	fmt.Print(i)
}
