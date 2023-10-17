#include <stdio.h>

int main()
{
    int temp;
    printf("Input the temperature: ");
    scanf("%d", &temp);
    if(temp <= 40 && temp >= -10)
        printf("This temperature is within the range.\n");
    else
        printf("This temperature is not within the range.\n");
    return 0;
}
