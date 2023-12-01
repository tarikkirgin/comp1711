#include <stdio.h>

void transpose_2d_array(int transposed_array[3][2], int array[2][3])
{
    for (size_t c = 0; c < 2; c++)
    {
        for (size_t r = 0; r < 3; r++)
        {
            transposed_array[r][c] = array[c][r];
        }
    }
}

int main()
{
    int array[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (size_t i = 0; i < 2; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n"); // start new line of output
    }
    int new_array[3][2];
    transpose_2d_array(new_array, array);
    printf("\n");
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 2; ++j)
        {
            printf("%d ", new_array[i][j]);
        }
        printf("\n"); // start new line of output
    }
}
