#include <stdio.h>

void reverseArray(int *array, int length);

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array)/sizeof(array[0]);
    printf("Initial array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    reverseArray(array, length);
    printf("Reversed array: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

void reverseArray(int *array, int length)
{
    for (int i = 0; i < length/2; i++)
    {
        int temp = array[i];
        array[i] = array[length-i-1];
        array[length-i-1] = temp;
    }
}