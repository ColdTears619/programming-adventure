// This Go program calculates the BMI (Body Mass Index) based on the user's height and weight inputs.
package main

import "fmt"

func main() {
	var heigh, weigh, bmi float32 = 0, 0, 0;

	fmt.Println("Enter heigh(m) and weight(kg): ");
	fmt.Scan(&heigh, &weigh);
	bmi = (heigh * heigh) / weigh;

	fmt.Println("your BMI is: ", bmi)
}