#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *file = fopen("numbers.dat", "a+");
    if(file == NULL)
    {
        perror("");
        return 1;
    }
    int buffer_size = 100;
    char buffer[buffer_size];
    
    float sum = 0;
    float count = 0;
    while(fgets(buffer, buffer_size, file))
    {
        sum += atof(buffer);
        count += 1;  
    }
    for (int i = 0; i < buffer_size; i++)
    {
        if(buffer[i] == '\0')
        {
            fprintf(file, "\n");
            break;
        }
        if(buffer[i] == '\n')
        {
            break;
        }
    }
    float average = sum / count;
    fprintf(file, "%f", average);
    fclose(file);
    return 0;
}