
package main

import (
	"fmt"
)

func main(){
	ang_id := map[string]int{
		"Ana Popescu": 1,
		"Mihai Ionescu": 2,
		"Bogdan Radu": 1,
		"Elena Dumitrescu": 3,
		"Cristian Vasile": 2,
		"Ioana Enache": 1,
	}

	id_ang := make(map[int][]string)


	for key, val := range ang_id {
		_, ok := id_ang[val]
		if ok {
			id_ang[val] = append(id_ang[val], key)
		} else {
			id_ang[val] = []string{key}
		}
	}


	fmt.Print(id_ang)
}
