package main

import (
	"fmt"
	"sort"
)

func main() {
	// Sorted slice of integers
	nums := []int{1, 3, 5, 7, 9, 11, 13, 15}

	// Target value to search for
	target := 7

	// Using sort.Search for binary search
	index := sort.Search(len(nums), func(i int) bool { return nums[i] >= target })

	// Checking if the target exists in the slice
	if index < len(nums) && nums[index] == target {
		fmt.Printf("Found %d at index %d\n", target, index)
	} else {
		fmt.Printf("%d not found\n", target)
	}
}
