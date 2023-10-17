#include <stdio.h>

int main() {
    int a[1000000];
    // for (int i = 1; i < sizeof(a)/sizeof(int); i++)
    // {
    //     a[i] = i;
    // }
    // for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    // {
    //     printf("a[%d] = %d\n", i,a[i]);
    // }
    printf("address of a = %p\n", &a);
    return 0;
}