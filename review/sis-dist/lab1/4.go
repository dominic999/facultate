package main

import (
	"fmt"
)

func main(){

	slice := []float32{1,2,3,4,5,6}
	var idx int
	fmt.Scan(&idx)

	slice = append(slice[:idx], slice[idx+1:]...)
	fmt.Println(slice)


}
