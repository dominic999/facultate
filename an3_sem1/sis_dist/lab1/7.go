package main

import (
	"fmt"
	"bufio"
	"os"
	"strings"
)

func main(){

	fisier, err := os.Open("input7.txt")
	if err != nil{
		fmt.Print("Nu merge\n")
	}

	defer fisier.Close()

	my_scanner := bufio.NewScanner(fisier)

	cuvinte := make(map[string]int)

	for my_scanner.Scan(){
		linie := my_scanner.Text()

		cuvinte_linie := strings.Fields(linie)

		for _, cuvant := range cuvinte_linie{
			fmt.Print("Cuvant:", cuvant, "\n")
			_, ok := cuvinte[cuvant]
			if !ok {
				cuvinte[cuvant] = 1
			} else{
				cuvinte[cuvant] += 1
			}
		}

	}
	fmt.Print(cuvinte)


}
