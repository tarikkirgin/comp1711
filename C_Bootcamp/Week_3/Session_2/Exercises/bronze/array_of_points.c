#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    double x;
    double y;
} point;

int main()
{
    srand(time(NULL));
    point points[10];
    for (size_t i = 0; i < 10; i++)
    {
        points[i].x = (double)rand() / (double)rand();
        points[i].y = (double)rand() / (double)rand();
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("(%.2f, %.2f)\n", points[i].x, points[i].y);
    }
}