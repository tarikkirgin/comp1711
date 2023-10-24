#include <stdio.h>

float sphereArea(float radius);

int main()
{
    float radius = 2.46;
    printf("The area of a sphere with radius %f is %f.\n", radius, sphereArea(radius));
    return 0;
}


float sphereArea(float radius)
{
    return radius * radius * radius * 3.1415926534 * 4/3;
}

