#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "point.h"

float manhattan_distance(point point_one, point point_two)
{
    return abs(point_one.x - point_two.x) + abs(point_one.y - point_two.y);
}

int main()
{
    srand(time(NULL));
    
    int n = 5;
    point points[n+1];

    for (int i = 0; i < n + 1; i++)
    {
        points[i].x = (double)rand() / (double)rand();
        points[i].y = (double)rand() / (double)rand();
    }

    float sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += manhattan_distance(points[i], points[i+1]);
    }
    float average = sum / (n+1);
    printf("Average: %f\n", average);
    return 0;
}