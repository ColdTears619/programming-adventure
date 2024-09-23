/**
 * This C++ program compares a user-inputted string with a predefined string and outputs either 100 if
 * they are the same or "Error!" if they are different.
 */
#include <iostream>
using namespace std;

int main()
{
    string main_string = "Coding Warriors", input_string = "";
    cout << "input your words: ";
    getline(cin, input_string);

    if(main_string == input_string)
        cout << 100;
    else
        cout << "Error!";
}