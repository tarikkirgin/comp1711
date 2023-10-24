#include <stdio.h>

int main()
{
    int number;
    printf("Input a number: ");
    scanf("%d", &number);
    if(number < 0)
        printf("The number is negative.\n");
    if(number > 0)
        printf("The number is positive.\n");
    else
        printf("The number is zero.\n");
    return 0;
}
