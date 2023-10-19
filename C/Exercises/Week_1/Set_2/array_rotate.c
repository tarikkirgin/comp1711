#include <stdio.h>

int main() {
    int array[5] = {1, 4, 20, 3, 12};
    int rotated_array[5];
    for (int i = 0; i < 5; i++)
    {
        rotated_array[(i+1)%5] = array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", rotated_array[i]);
    }
    printf("\n");
    return 0;
}