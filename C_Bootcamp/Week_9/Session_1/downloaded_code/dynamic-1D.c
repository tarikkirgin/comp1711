#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_size;
    printf("Input the size of the array = ");
    scanf("%d", &array_size);
    printf("\n");

    // int vector[array_size];
    // printf("size: %ld\n", sizeof(vector));
    int *vector = (int *)malloc(sizeof(*vector) * array_size);
    if (vector == NULL)
    {
        exit(10);
    }

    for (int i = 0; i < array_size; i++)
    {
        vector[i] = i * i;
    }

    for (int i = 0; i < array_size; i++)
    {
        printf("vector[%d] = %d\n", i, vector[i]);
    }

    free(vector);
}