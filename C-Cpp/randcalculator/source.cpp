/**
 * This C++ program takes a user input number and performs different calculations based on whether the
 * number is even or odd.
 */
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int num, arr1[4] = {2,4,6,8}, arr2[3] = {3,6,9};
    float result = 0;


    cout << "Enter your number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        result = arr1[(rand() % (4 - 1 + 1)) + 1] * num;
        cout << "Result is: " << result;
    }
    else
        for (int i = 0; i < 3; i++)
        {
            cout << "you number is odd so result for " << i + 1 << " is: " << (float)num / arr2[i] << endl;
        }

    exit(0);
}