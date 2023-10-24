#include <stdio.h>

int main() {
    char word[5] = "Hello";
    for (int i = 5; i >= 0; i--)
    {
        if(i == 5)
        {
            printf("\\0");
        }
        else
        {
            printf("%c", word[i]);
        }
        
    }
    printf("\n");
}