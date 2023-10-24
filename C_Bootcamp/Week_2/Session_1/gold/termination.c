#include <stdio.h>

int main()
{
    int termination_value = -1;
    int input = 0;
    while (input != termination_value)
    {
        printf("Input a number: ");
        scanf("%d", &input);
        if (input >= 0 && input <= 100)
        {
            printf("The number is within the range.\n");
        }
        else if (input != termination_value)
        {
            printf("The number is not within the range.\n");
        }
    }
    printf("Termination value received.\n");
    return 0;
}
