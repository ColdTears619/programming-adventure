#include <stdio.h>
#include <stdlib.h>

int main() 
{
		int arr1[4] = {1,2,3,4};
		int arr2[2] = {1,3};
		int arr3[6];
		
	for (int i = 0; i < 2 ; i++)
	{
		for (int j = 0; j < 4 ; j++)
		{
			if ( arr2[i] != arr1[j] ) 
			{
				arr3[i] = arr[j];
			}				
		}
	}
		
}