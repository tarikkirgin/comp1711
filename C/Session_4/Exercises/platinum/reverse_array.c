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
    int reversed_array[length];
    for (int i = 0; i < length; i++)
    {
        reversed_array[i] = array[length-i-1];
    }
    for (int i = 0; i < length; i++)
    {
        array[i] = reversed_array[i];
    }
}