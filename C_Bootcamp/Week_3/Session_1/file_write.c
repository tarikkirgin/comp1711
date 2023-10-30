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
    int max_number = 10;
    for (int i = 0; i <= max_number; i++)
    {
        fprintf(file, "%d\n", i * i);
    }

    fclose(file);
    return 0;
}