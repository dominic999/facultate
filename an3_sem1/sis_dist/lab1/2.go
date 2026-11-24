package main
import (
	"fmt"
)

func main(){
	//2
	nums := []int32{1,2,4,12,3,12}
	
	for i := 0; i < len(nums); i++{
		for j := i; j < len(nums); j++{
			if nums[i] > nums[j]{
				x := nums[i]
				nums[i] = nums[j]
				nums[j] = x
			}
		}
	}

	fmt.Println(nums)

}

