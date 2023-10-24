#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// https://en.cppreference.com/w/c/numeric/random/srand

int main() {
    srand(time(NULL));
    int array[6];
    for (int i = 0; i < 6; i++)
    {
        array[i] = rand() % 10;
    }
    printf("Array: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if(array[i] == array[j])
            {
                printf("Duplicate found: %d\n", array[i]);
            }
        }
    }
    return 0;
}