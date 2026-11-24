
package main

import (
	"fmt"
)

func main(){

	slice := []string{"am", "mancat", "mere"}
	l := 0
	r := len(slice) - 1

	for l < r {

		tmp := slice[l]
		slice[l] = slice[r]
		slice[r] = tmp

		l += 1 
		r -= 1
	}
	fmt.Println(slice)



}
