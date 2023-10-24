// The above function calculates the sum of all the elements in an array of integers.
package main

import "fmt";

func main() {
	var a = []int64{23,43,56,22,11};
	var sum int64 = 0
	for i := 0; i < len(a); i++ {
		sum = sum + a[i];
	}
	fmt.Println(sum)
}