package main

import(
	"fmt"
)

func main(){
	inaltimi := map[string]int{
		"Andrei": 180,
		"Miruna": 172,
		"Maria": 188,
	}

	i := 0
	keys := make([]string, len(inaltimi))
	for k := range inaltimi {
		keys[i] = k
		i++
	}

	for i := 0; i < len(inaltimi); i++{
		for j := i+1; j < len(inaltimi); j++{
			cheie_i := keys[i]
			cheie_j := keys[j]

			if inaltimi[cheie_i] > inaltimi[cheie_j]{
				cheie_x := cheie_i

				keys[i] = keys[j]
				keys[j] = cheie_x
			}
		} 
	}
	for _,cheie := range keys{
		// fmt.Printf("%s, %s", cheie, inaltimi[cheie])
		fmt.Print(cheie, " ", inaltimi[cheie], "\n")
	}

}
