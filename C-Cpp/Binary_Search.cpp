#include <iostream>

using namespace std;

int main() 
{
    int arrayOfNumbers[5] = {1, 9, 5, 7, 9};
    int numberForSearch;
    bool found = false;
    
    cin >> numberForSearch;

    for(int i = 0; i < 5; i++)
    {
      if (numberForSearch == arrayOfNumbers[i]) 
        {
            cout << "Found in position: " << i << endl;
            found = true;
        }
    }

    if (!found) cout << "number not found!";
}
