#include <stdio.h>

int main()
{
    char word[5] = "hello";
    for (int i = 0; i < 6; i++)
    {
        printf("%c - %d - %p\n", word[i], word[i], word[i]); 
    }
    return 0;
}