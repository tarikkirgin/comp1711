#include <stdio.h>

int main() {
    int array[5] = {1, 4, 20, 3, 12};
    int max = array[0];
    for (int i = 1; i < 5; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    printf("Maximum value is: %d\n", max);
    return 0;
}