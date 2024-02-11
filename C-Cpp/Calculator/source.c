#include <stdio.h>

int main()
{
    float number1, number2, result, flagToContinue = 0, flagToExit = 0;
    char operation;
    while(1)
    {
        printf("Enter first number: ");
        scanf("%f", &number1);
        printf("Enter operation(+,-,/,*,C): ");
        scanf(" %c", &operation);

        if (flagToContinue == 0)
        {
            printf("Enter second number: ");
            scanf("%f", &number2);
        }

        switch (operation)
        {
        case '+':
            result = number1 + number2;
            printf("\n%.5f + %.5f = %.2f\n", number1, number2, result);
            number2 = result;
            flagToContinue = 1;
            break;
        case '-':
            result = number1 - number2;
            printf("\n%.5f - %.5f = %.2f\n", number1, number2, result);
            number2 = result;
            flagToContinue = 1;
            break;
        case '*':
            result = number1 * number2;
            printf("\n%.5f * %.5f = %.2f\n", number1, number2, result);
            number2 = result;
            flagToContinue = 1;
            break;
        case '/':
            result = number1 / number2;
            printf("\n%.5f * %.5f = %.2f\n", number1, number2, result);
            number2 = result;
            flagToContinue = 1;
            break;
        case 'C':
            flagToContinue = 0;
            break;
        default:
            flagToExit = 1;
            break;
        }
        if(flagToExit == 1) exit(0);
    }
}