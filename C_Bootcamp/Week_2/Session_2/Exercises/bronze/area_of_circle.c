#include <stdio.h>

float circleArea(float radius);

int main()
{
    float radius = 2.46;
    printf("The area of a circle with radius %f is %f.\n", radius, circleArea(radius));
    return 0;
}


float circleArea(float radius)
{
    return radius * radius * 3.1415926534;
}

