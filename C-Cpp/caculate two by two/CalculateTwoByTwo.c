/**
 * This program takes in six numbers from the user, performs addition, subtraction, and multiplication
 * operations on pairs of numbers, and determines whether the result is an integer or a double.
 */
#include<stdio.h>
#define size 6

int detect_type(float);

int main()
{
    float numbers[size];


    for(int i = 0; i < size; i++)
    {
        printf("Enter %dth number: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    for(int i = 0, j = 1; i < size, j <= 3; i += 2, j++)
    {
        switch(j)
        {
            case 1:
                printf("from %dth to %dth calculate is: %f\n", i + 1, i + 2, numbers[i] + numbers[i+1]);
                printf("The type of num is: %s\n\n", detect_type(numbers[i] + numbers[i+1]) == 4 ? "Integer" : "double");
                break;
            case 2:
                printf("from %dth to %dth calcul\nate is: %f\n", i + 1, i + 2, numbers[i] - numbers[i+1]);
                printf("The type of num is: %s\n\n", detect_type(numbers[i] + numbers[i+1]) == 4 ? "Integer" : "double");
                break;
            case 3:
                printf("from %dth to %dth calcul\nate is: %f\n", i + 1, i + 2, numbers[i] * numbers[i+1]);
                printf("The type of num is: %s\n\n", detect_type(numbers[i] + numbers[i+1]) == 4 ? "Integer" : "double");
                break;
        }
    }
}

int detect_type(float x)
{
    int type = sizeof(x);
    switch(type)
    {
        case 4:
            return 4;
            break;
        case 1:
            return 1;
            break;
    }
}