#include <stdio.h>

int main() {
    int a;

    for(a = 1; a <= 5; a++2){
        printf("a = %d\n", a);
    }
    printf("After exiting hte loop: a = %d\n", a);
}