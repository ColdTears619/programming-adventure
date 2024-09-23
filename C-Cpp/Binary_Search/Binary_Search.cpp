#include <iostream>

using namespace std;

void binary_search(int [], int, int);

int main() 
{
    int arrayOfNumbers[5] = {1, 3, 5, 7, 9};
    int numberForSearch;
    cin >> numberForSearch;
    binary_search(arrayOfNumbers, 5, numberForSearch);
}

void binary_search(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    int mid = (high + low) / 2;
    
    while(low <= high)
    {
        if(target > arr[mid])
        {
            low = mid + 1;
            mid = (high + low) / 2;
        }
        else if(target < arr[mid]) 
        {
            high = mid - 1;
            mid = (high + low) / 2;
        }
        else 
        {
            cout << "Found in: " << mid << endl;
            break;    
        }
    }
    
    if(low > high)
    {
        cout << -1;
    }
}
