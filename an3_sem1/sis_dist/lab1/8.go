package main

import (
	"fmt"
)

func main(){
	angajati := map[string]int{
		"Ana": 1,
		"Mihai": 2,
		"Bogdan": 3,
		"Maria": 1,
		"Ionut": 2,
		"Mirela": 3,
	}
	departamente := make(map[int][]string)

	for nume, departament := range angajati{
		departamente[departament] = append(departamente[departament], nume)
	}
	fmt.Print(departamente)
}
