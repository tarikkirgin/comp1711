#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// https://en.cppreference.com/w/c/numeric/random/srand

int main()
{
    srand(time(NULL));
    int array[6];
    int seen[6] = {-1, -1, -1, -1, -1, -1};
    int tail = 0;
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
            if (array[i] == array[j])
            {
                char discovered = 0;
                for (int k = 0; k < tail; k++)
                {
                    if (array[i] == seen[k])
                    {
                        discovered = 1;
                        break;
                    }
                }
                if (discovered == 0)
                {
                    printf("Duplicate found: %d\n", array[i]);
                    seen[tail] = array[i];
                    tail++;
                }
            }
        }
    }
    return 0;
}