package main

import (
	"fmt"
)

func main(){

	numbers := []int{10,21,19,18}
	even_numbers := []int{}
	for _, num := range numbers{
		if num%2 == 0{
			even_numbers = append(even_numbers, num)
		}
	}
	fmt.Println(even_numbers)
}
