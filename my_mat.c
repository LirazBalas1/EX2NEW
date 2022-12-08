#include "my_mat.h"

void algorithm(int matrix[][MATRIX_SIZE])
{
    for (int k = 0; k < MATRIX_SIZE; k++)
    {
        for (int i = 0; i < MATRIX_SIZE; i++)
        {
            for (int j = 0; j < MATRIX_SIZE; j++)
            {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
}

void set_Matrix_Info(int matrix[][MATRIX_SIZE])
{
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (i != j && matrix[i][j] == 0)
                matrix[i][j] = INF;
        }
    }

    algorithm(matrix);
}

void has_Route(int matrix[][MATRIX_SIZE], int i, int j)
{
    printf("%s\n", (matrix[i][j] > 0 && matrix[i][j] < INF) ? "True" : "False");
}

void shortest_Route(int matrix[][MATRIX_SIZE], int g, int h)
{
    printf("%d\n", (matrix[g][h] > 0 && matrix[g][h] != INF) ? matrix[g][h] : -1);
}
