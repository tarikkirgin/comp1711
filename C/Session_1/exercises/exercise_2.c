#include <stdio.h>

// reverse a string (knowing the length)
int main(){
    char name[7] = "Martin";
    char reversed_name[7];
    for (int i = 0; i < 6; i++)
    {
        reversed_name[i] = name[5-i];
    }
    printf("Starting word: %s\n", name);
    printf("Reversed word: %s\n", reversed_name);
    return 0;
}