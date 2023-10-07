/**
 * This program calculates the total age of a person's parents and siblings.
 *
 * @return The program is returning the total sum of ages entered by the user.
 */
#include <stdio.h>

int main()
{
    int total_ages = 0;
    int age = 0, exit;
    int counter = 1;
    while(1)
    {
        if(counter <= 2)
        {
            printf("Enter your parent age: ");
            scanf("%d", &age);
            total_ages += age;
            printf("do you want to exit?(1/0)");
            scanf("%d", &exit);
            if(exit == 1)
            {
                printf("%d", total_ages);
                return 1;
            }
            ++counter;
        }
        else
        {
            printf("Enter your brother or sister age: ");
            scanf("%d", &age);
            total_ages += age;
            printf("do you want to exit?(1/0)");
            scanf("%d", &exit);
            if(exit == 1)
            {
                printf("%d", total_ages);
                return 1;
            }
        }
    }
}