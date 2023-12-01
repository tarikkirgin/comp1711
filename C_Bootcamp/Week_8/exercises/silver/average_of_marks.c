#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float average(int marks_array[4][5])
{
    float sum = 0;
    for (size_t row = 0; row < 4; row++)
    {
        for (size_t column = 0; column < 5; column++)
        {
            sum += marks_array[row][column];
        }
    }
    return sum / 4;
}

void student_total_marks(int marks_array[4][5])
{
    for (size_t row = 0; row < 4; row++)
    {
        int sum = 0;
        for (size_t column = 0; column < 5; column++)
        {
            sum += marks_array[row][column];
        }
        printf("Student %ld total marks: %d\n", row + 1, sum);
    }
}

int main()
{
    srand(time(NULL));
    int marks[4][5];
    for (size_t row = 0; row < 4; row++)
    {
        for (size_t column = 0; column < 5; column++)
        {
            marks[row][column] = rand() % 26;
        }
    }

    printf("Average of total marks among all students: %.2f\n", average(marks));
    student_total_marks(marks);
    return 0;
}
