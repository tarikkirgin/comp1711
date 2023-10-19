#include <stdio.h>

int main() {
    int array[5] = {1, 4, 20, 3, 12};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum+=array[i];
    }
    printf("Total is: %d\n", sum);
    return 0;
}