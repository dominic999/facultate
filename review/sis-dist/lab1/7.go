package main

import (
	"fmt"
	"os"
	"bufio"
)

func main(){

	var slice []string 
	mp := make(map[string]int)
	var x string
	scanner := bufio.NewScanner(os.Stdin)
	for scanner.Scan() {
		x = scanner.Text()
		if x == ""{
			break
		}
		slice = append(slice, x)
		fmt.Println(len(x))
		v, ok := mp[x]
		if ok {
			mp[x] = v + 1
		} else {
			mp[x] = 1
		}
	}
	if err := scanner.Err(); err != nil {
		fmt.Fprintln(os.Stderr, "reading standard input:", err)
	}
	fmt.Print(mp)


}
