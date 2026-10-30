
package main

import (
	"fmt" 
	"bufio" 
	"os"
	"strconv"
)

func main(){

	//1
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	num := scanner.Text()
	int_num, e := strconv.Atoi(num)
	if e != nil{
		fmt.Println("nu merge")
	}
	ok := 0
	for i := 2; i < int_num; i++{
		if int_num % i == 0{
			fmt.Println("Nu este prim")
			ok = 1
			break
		}
	}
	if ok == 0{
		fmt.Println("Este prim")
	}
	



}
