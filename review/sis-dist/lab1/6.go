package main

import (
	"fmt"
	"cmp"
	"slices"
)

func main(){
	mp := map[string]int{
	"Andrei": 190,
	"Maria": 165,
	"Ion": 182,
	"Elena": 172,
	"George": 178,
	"Ana": 165,
	}

	heightCmp := func(a, b string) int {
		val, ok := mp[a]
		if !ok {
			return -2 
		}
		val2, ok2 := mp[b]
		if !ok2 {
			return -2 
		}
		return cmp.Compare(val, val2)
	}

	var keys []string

	for k, _ := range mp {
		keys = append(keys, k)
	} 

	
	fmt.Println(keys)
	slices.SortFunc(keys, heightCmp)

	for _, key := range keys{
		fmt.Println(mp[key])
	}


}
