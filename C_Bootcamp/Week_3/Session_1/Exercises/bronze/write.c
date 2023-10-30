#include <stdio.h>

int main ()
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    FILE *file = fopen("squares.dat", "w");
    if(file == NULL)
    {
        perror("");
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        fprintf(file, "%d\n", i * i);
    }
    fclose(file);
    return 0;
}