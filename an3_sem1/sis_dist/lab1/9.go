package main

import (
	"fmt"
)

func main(){

	a := []int{8, 3, 7, 2, 5}
	s := 10

	m := make(map[int]int)

	for i, x := range a {
		if j, ok := m[s-x]; ok {
			fmt.Println(j, i)
			return
		}

		m[x] = i
	}
}
