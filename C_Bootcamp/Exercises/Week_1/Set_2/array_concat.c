#include <stdio.h>

int main() {
    int array_1[3] = {1, 4, 20};
    int array_2[3] = {93, 120, 73};
    int concatenated_array[6];
    for (int i = 0; i < 3; i++)
    {
        concatenated_array[i] = array_1[i];
        concatenated_array[i+3] = array_2[i];
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", concatenated_array[i]);
    }
    printf("\n");
    return 0;
}