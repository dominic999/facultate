package main

import (
	"fmt"
)

func main(){

	slice := []string{"ana", "are", "mere"}
	i := 0
	j := len(slice)-1
	for i < j {
		x := slice[i]
		slice[i] = slice[j]
		slice[j] = x

		j--
		i++
	}
	fmt.Print(slice)
}
