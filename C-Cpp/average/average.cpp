/**
 * This C++ program calculates the average of an array of floating-point numbers.
 */
#include <iostream>

using namespace std;

int main()
{
    int size = 5;
    float arr[size] = {6,85,96,14,1.6};
    float sum = 0,average = 0;

    for(int i = 0; i < size; i++)
        sum += arr[i];

    average = sum / size;
    cout << average;
}