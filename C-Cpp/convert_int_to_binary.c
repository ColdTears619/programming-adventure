#include <fenv.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int decimal = atoi(argv[1]), count = 0, remainder = 0, quotient = 0;
    int binary[32];
    printf("your decimal number is: %d\n", decimal);

    while(decimal > 0)
    {
        binary[count] = decimal % 2;
        printf("%d = %d\n", decimal, binary[count]);
        decimal /= 2;
        count++;
    }

    int nubmerofbitsequalto1 = 0;
    int i = 0;
    for(i = 0; i < count; i++)
    {
        if(binary[i] == 1)\ 
        {
            ++nubmerofbitsequalto1;
            //printf("%d", nubmerofbitsequalto1);
        }
    }

    printf("%d", nubmerofbitsequalto1);


}
