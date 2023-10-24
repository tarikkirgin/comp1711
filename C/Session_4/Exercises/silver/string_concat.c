#include <stdio.h>

int str_len(char *string);
char* concatStrings(char *string1, char *string2, char *new_string);

int main() 
{
    char string1[30];
    char string2[30];
    printf("Enter a string: ");
    scanf("%s", string1);
    printf("Enter a second string: ");
    scanf("%s", string2);
    char new_string[str_len(string1) + str_len(string2)];
    char *concat_string = concatStrings(string1, string2, new_string);
    printf("Concatenated string: %s\n", concat_string);
    return 0;
}

int str_len(char *string)
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

char* concatStrings(char *string1, char *string2, char *new_string)
{
    int string_1_length = str_len(string1);
    int string_2_length = str_len(string2);
    int new_string_length = (string_1_length + string_2_length);
    for (int i = 0; i < string_1_length; i++)
    {
        new_string[i] = string1[i];
    }
    for (int i = 0; i < string_2_length; i++)
    {
        new_string[string_1_length+i] = string2[i];
    }
    new_string[new_string_length] = '\0';
    return new_string;
}