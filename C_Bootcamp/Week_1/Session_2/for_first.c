#include <stdio.h>

int main() {
    int a;

    for(a = 1; a <= 5; a++){
        printf("a = %d\n", a);
    }
    printf("After exiting the loop: a = %d\n", a);
}