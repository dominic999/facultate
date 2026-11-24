package main

import (
	"fmt"
	"math/rand"
)

type Coordonate struct{
	x int
	y int
}

var x_final, y_final int

func robot1(ch1 chan <- Coordonate){
	c := Coordonate{0,0}
	i := 0
	for c.x != x_final || c.y != y_final{
		if i%10 == 0{
			ch1 <- c
		}
		directie := rand.Int()
		if directie%4 == 0 && c.x < x_final {
			c.x += 1
		} else if directie % 4 == 1 && c.x > 0{
			c.x -=1 
		} else if directie % 4 == 2 && c.y > 0{
			c.y -=1 
		} else if directie % 4 == 3 && c.y < y_final{
			c.y +=1 
		}
		i+=1
	}
	ch1 <- c

}

func robot2(ch2 chan <- Coordonate){

	c := Coordonate{0,0}
	i := 0
	for c.x != x_final || c.y != y_final{
		directie := rand.Int()
		if i % 10 == 0{
			ch2 <- c
		}
		if directie%4 == 0 && c.x < x_final {
			c.x += 1
		} else if directie % 4 == 1 && c.x > 0{
			c.x -=1 
		} else if directie % 4 == 2 && c.y > 0{
			c.y -=1 
		} else if directie % 4 == 3 && c.y < y_final{
			c.y +=1 
		}
		i += 1
	}
	ch2 <- c

}

func main(){
	x_final = 100
	y_final = 100
	ch1 := make(chan Coordonate)
	ch2 := make(chan Coordonate)
	done := 0
	go robot1(ch1)
	go robot2(ch2)
	for true {
		if done == 1{
			break
		}
		select {
		case coord := <- ch1:
			fmt.Printf("Robot1 -> x: %d, y: %d\n", coord.x, coord.y)
			if coord.x == x_final && coord.y == y_final{
				fmt.Println("A terminat robot1")
				done = 1
				break
			}
		case coord := <- ch2:
			fmt.Printf("Robot2 -> x: %d, y: %d\n", coord.x, coord.y)
			if coord.x == x_final && coord.y == y_final{
				fmt.Println("A terminat robot2")
				done = 1
				break
			}
		}

	}
}
