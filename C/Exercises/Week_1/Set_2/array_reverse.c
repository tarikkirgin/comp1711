#include <stdio.h>

int main() {
    int array[5] = {1, 4, 20, 3, 12};
    int reversed_array[5];
    for (int i = 0; i < 5; i++)
    {
        reversed_array[i] = array[4-i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", reversed_array[i]);
    }
    printf("\n");
    return 0;
}