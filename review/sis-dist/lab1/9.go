package main

import (
	"fmt"
)

func main(){

	arr := [6]int{2,7,11,8,4,9}
	k := 15
	mp := make(map[int]int)

	for idx, v := range arr {
		mp[v] = idx 
	}


	for idx, v := range arr {
		val, ok := mp[k - v]
		if ok {
			fmt.Printf("%d %d\n", idx, val)
		}
		if idx >= ((len(arr)-1) / 2){
			break
		}
	}

}
