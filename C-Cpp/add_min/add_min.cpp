#include <iostream>

using namespace std;

int main()
{
    int firstnum, secnum, result;
    cout << "Enter first number: ";
    cin >> firstnum;
    cout << "Enter second number: ";
    cin >> secnum;

    if((firstnum % 2 == 0 && secnum % 2 !=  0) || (firstnum % 2 != 0 && secnum % 2 == 0))
        result = firstnum * secnum;
    else if(firstnum % 2 != 0 && secnum % 2 != 0)
            result = firstnum - secnum;
    else 
        result = firstnum + secnum;

    cout << "Result is: " << result;
}
