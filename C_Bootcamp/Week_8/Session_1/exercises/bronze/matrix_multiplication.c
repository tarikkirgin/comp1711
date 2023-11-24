#include <stdio.h>

void multiply_matrices(int array1[2][3], int array2[3][2], int product[2][2])
{
    for (size_t row = 0; row < 2; row++)
    {
        for (size_t col = 0; col < 3; col++)
        {
            product[row][col] = 0;
            for (size_t i = 0; i < 3; i++)
            {
                product[row][col] += array1[row][i] * array2[i][col];
            }
        }
    }
}

int main()
{
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int array2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int product[2][2];

    multiply_matrices(array1, array2, product);

    for (size_t i = 0; i < 2; ++i)
    {
        for (size_t j = 0; j < 2; ++j)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n"); // start new line of output
    }
}