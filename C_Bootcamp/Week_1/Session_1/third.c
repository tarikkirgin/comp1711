#include <stdio.h>

int main() {
    int max = 256;
    for (int i = 0; i < max; i++)
    {
        printf("%d: %c\n", i, i);
    }
    return 0;    
}