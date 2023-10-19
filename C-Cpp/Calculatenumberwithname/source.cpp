/**
 * This C++ program checks if the input name matches a predefined name and then performs a calculation
 * on two numbers.
 */
#include <iostream>

using namespace std;

int main()
{
    string checkname = "Coding Warriors", inputname;
    int num1, num2;

    cout << "Enter name checker: ";
    getline(cin, inputname);

    if (inputname != checkname)
         exit(1);

    cout << "Enter numbers: ";
    cin >> num1 >> num2;
    cout << "Your Result is: " <<((num1 + num2) - 2) * 3;
}