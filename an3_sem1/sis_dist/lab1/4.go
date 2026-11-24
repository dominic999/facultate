package main

import (
	"fmt"
	"bufio"
	"os"
	"strconv"
)

func main(){

	nums := []float32{1,2,12,3}
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	x := scanner.Text()
	int_num, e := strconv.Atoi(x)
	if e != nil{
		fmt.Println("nu merge")
	}
	new_nums := append(nums[:int_num], nums[int_num+1:])
	fmt.Println(new_nums)
	
}
