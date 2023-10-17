#include <stdio.h>

int main() {
    char a = 1;

    while(a > 0){
        printf("a = %d\n", a);
        a++;
    }
    printf("After exiting the loop: a = %d\n", a);
}