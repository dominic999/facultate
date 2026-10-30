package main
import (
	"fmt"
	"sync"
)


func f(ch chan string, wg *sync.WaitGroup){
	i := <- ch
	fmt.Print(i)
	wg.Done()
}

func main(){
	ch := make(chan string)
	var wg sync.WaitGroup;
	wg.Add(1)
	go f(ch, &wg)
	ch <- "salut"
	wg.Wait()
}
