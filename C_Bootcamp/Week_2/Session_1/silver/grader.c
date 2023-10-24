#include <stdio.h>

int main()
{
    int mark;
    printf("Input the mark: ");
    scanf("%d", &mark);
    if(mark < 50)
        printf("This student has failed.\n");
    else if(mark < 70)
        printf("This student has passed.\n");
    else
        printf("This student has achieved a distinction.\n");
    return 0;
}
