package main

import (
	"fmt"
)

func main(){


	var arr [10]int = [10]int{10,2,3,1,4,5,6,9,8,7}

	for i := 0; i < len(arr); i++ {
		for j := i; j < len(arr); j++ {
			if arr[i] > arr[j] {
				tmp := arr[i]
				arr[i] = arr[j]
				arr[j] = tmp
			}
		}
	}
	fmt.Println(arr)

}
