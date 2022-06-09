package main

import "fmt"

func main() {
	arr := [10]int{9, 0, 8, 1, 7, 2, 6, 3, 5, 4}

	for i := 0; i < len(arr); i++ {
		for j := 0; j < len(arr)-i-1; j++ {
			if arr[j] > arr[j+1] {
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}

	fmt.Println(arr)
}
