package main

import (
	"fmt"
	"math"
)

func main(){

	var i float64
	fmt.Scan(&i)

	var c int = 2 
	sqrt := math.Sqrt(i)

	for c <= int(sqrt) {
		if int(i) % c == 0 {
			fmt.Println("Nu este prim")
			return
		}
		c += 1
	}

	fmt.Println("Este prim")
}
