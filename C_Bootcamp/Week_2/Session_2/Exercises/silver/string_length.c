#include <stdio.h>

int str_len(char* string);

int main () {
    char input[] = "Hello";
    printf("The length of string '%s' is %d.\n", input, str_len(input));
    return 0;
}

int str_len(char* string)
{
    int end = 0;
    while(1)
    {
        if(string[end] == '\0')
        {
            return end;
        }
        end++;
    }
}