#include <stdio.h>
int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("enter no. of rows:\n");
    scanf("%d", &r);
    printf("enter no. of column\n");
    scanf("%d", &c);

    printf("Enter elements of matrix a\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the element of a%d%d\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of  matrix b\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the element of b%d%d\n", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    //matrix addition
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("sum of two matrices\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    }

    return 0;
}

