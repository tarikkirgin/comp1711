#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void populate_array(int marks[2][3][4])
{
    for (int semester = 0; semester < 2; semester++)
    {
        for (int student = 0; student < 3; student++)
        {
            for (int module = 0; module < 4; module++)
            {
                marks[semester][student][module] = 70 + rand() % 31;
            }
        }
    }
}

int main()
{
    srand(time(NULL));
    int marks[2][3][4];

    populate_array(marks);

    return 0;
}