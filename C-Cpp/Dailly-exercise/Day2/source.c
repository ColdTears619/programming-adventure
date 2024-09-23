#include <stdio.h>
#include <math.h>
// Define prototypes
float Sum(float, float);
int GreatestNumber(float, float, float);
int Factorial(float);
int OddorEvenDetection(float);

int main(void)
{
  float number1 = 0, number2 = 0, number3 = 0;
  printf("Enter Number1, Number2 and Number3 respectively: ");
  scanf("%f%f%f", &number1, &number2, &number3);
  
  float sum = Sum(number1, number2);
  int greatestNumber = GreatestNumber(number1, number2, number3);
  int factorial = Factorial(number1);
  int checkOddNumber = OddorEvenDetection(number1);

  printf("Sum of number1 and number2 is: %f\nGreatest between 3 numbers are: %d\nFactorial of number1 is: %d\nChecking number is: %d\n", sum, greatestNumber, factorial, checkOddNumber);
}

//********************************
//Functions
float Sum(float firstNumber, float secondNumber)
{
  return firstNumber + secondNumber;
}

int GreatestNumber(float firstNumber, float secondNumber, float thirdNumber)
{
  return (firstNumber > secondNumber) && (firstNumber > thirdNumber) ? firstNumber : ((firstNumber < secondNumber) && (secondNumber > thirdNumber) ? secondNumber : thirdNumber);
}

int Factorial(float firstNumber)
{
  float temp = 1;
  for (int i = 1; i <= firstNumber; i++)
  {
    temp = temp * i; 
  }
  return temp;
}

int OddorEvenDetection(float firstNumber)
{
  return fmod(firstNumber, 2.0) == 0 ? 0 : 1; 
}
