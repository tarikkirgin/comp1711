#include <stdio.h>
#include "utils.h"

int main() 
{
    char filename[]  = "data.txt";
    FILE* file = file_open(filename, "r");

    int buffer_size = 2;
    char buffer[buffer_size];
    while(fgets(buffer, buffer_size, file))
    {
        printf("%s", buffer);   
    }
    
    fclose(file);
    return 0;
}