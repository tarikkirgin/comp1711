#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "point.h"

float euclidean_distance(point point_one, point point_two)
{
    float x_diff = point_one.x - point_two.x;
    float y_diff = point_one.y - point_two.y;
    float diff_sums = (x_diff * x_diff) + (y_diff * y_diff);
}

int main() 
{
    srand(time(NULL));

    int n = 5;
    point points[n+1];

    printf("test:++++=> %f\n\n\n", euclidean_distance((point){5, -6}, (point){32, -4}));

    // populate array with random floats
    for (int i = 0; i < n + 1; i++)
    {
        points[i].x = (double)rand() / (double)rand();
        points[i].y = (double)rand() / (double)rand();
    }

    float min_distance = __FLT_MAX__;
    int point_indexes[2];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            float distance = euclidean_distance(points[i], points[j]);
            if(distance < min_distance)
            {
                min_distance = distance;
                point_indexes[0] = i;
                point_indexes[1] = j;
            }
        }
    }
    printf("The indexes of the points with the lowest euclidean distance are [%d] and [%d].\n", point_indexes[0], point_indexes[1]);
    return 0;
}