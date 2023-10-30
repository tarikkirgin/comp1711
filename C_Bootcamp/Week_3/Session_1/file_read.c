#include <stdio.h>

int main() 
{
    char filename[]  = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("File i/o");
        return 1;
    }    

    int buffer_size = 2;
    char buffer[buffer_size];
    while(fgets(buffer, buffer_size, file))
    {
        printf("%s", buffer);   
    }
    
    fclose(file);
    return 0;
}