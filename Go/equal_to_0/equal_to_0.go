package main

import "fmt"

type Arraystore struct {
    num1 int32
    num2 int32
    num3 int32
}

func main() {
    var array = [6]int32{-1, 0, 1, 2, -1, -4};
    //var ArrayOfStruct [6] Arraystore;
    var i,j,k int;
    for i = 0; i < len(array); i++ {
        for j = 0; j < len(array); j++ {
            //fmt.Println("i and j are: ",i, j, "and array of that is: ", array[i], array[i + 1], array[j])
            if (i != j && i + 1 != j + 1) && ((array[i] + array[i+1]) + array[j] == 0) && (i + 1 < len(array)) {
                fmt.Println(array[i], array[i + 1], array[j])
            }
        }
    }
}
