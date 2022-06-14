package main

import "fmt"

func main() {
	arr := [10]int{9, 0, 1, 8, 2, 7, 3, 6, 4, 5}

	for i := 1; i < len(arr); i++ {
		j := i

		for j > 0 {
			if arr[j-1] > arr[j] {
				arr[j-1], arr[j] = arr[j], arr[j-1]
			}

			j -= 1
		}
	}
	fmt.Println(arr)
}
