#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *file = fopen("../bronze/squares.dat", "r");
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
        sum+= atoi(buffer);
        count+=1;
    }
    float average = sum / count;
    printf("Sum: %f\n", sum);
    printf("Count: %f\n", count);
    printf("Average: %f\n", average);
    
    fclose(file);
    return 0;
}