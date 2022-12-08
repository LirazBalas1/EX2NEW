#include "my_mat.h"
#include <stdio.h>
int main()
{
    char choice;
    int flag = 1;
    int matrix[MATRIX_SIZE][MATRIX_SIZE], i = 0, j = 0;
    while (flag)
    {
        scanf("%c", &choice);
        switch (choice)
        {
        case 'A':
        {
            set_Matrix_Info(matrix);
            break;
        }

        case 'B':
        {
            scanf("%d%d", &i, &j);
            has_Route(matrix, i, j);
            break;
        }

        case 'C':
        {
            scanf("%d%d", &i, &j);
            shortest_Route(matrix, i, j);
            break;
        }

        case 'D':
        {
            flag = 0;
            break;
        }

        default:
            break;
        }
    }
    return 0;
}
