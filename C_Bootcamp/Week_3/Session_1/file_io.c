#include <stdio.h>

int main() 
{
    char filename[]  = "data.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        perror("File i/o");
        return 1;
    }    
    fprintf(file, "Hello file :)\n");
    fclose(file);
    return 0;
}