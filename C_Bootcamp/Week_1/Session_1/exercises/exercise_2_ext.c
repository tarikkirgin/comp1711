#include <stdio.h>

// reverse a string (unknowing the length)
int main(){
    char name[100];
    int length;
    printf("Input a word: ");
    scanf("%s", name);
    for (int i = 0; i < 100; i++)
    {
        if(name[i] == '\0'){
            length = i;
            break;
        }
    }
    char reversed_name[length];
    for (int i = 0; i < length; i++)
    {
        reversed_name[i] = name[length-1-i];
    }
    reversed_name[length] = '\0';
    printf("Starting word: %s\n", name);
    printf("Reversed word: %s\n", reversed_name);
    return 0;
}