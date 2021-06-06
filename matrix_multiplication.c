#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c, d, m, n, result[100][100], sum=0;
    printf("Enter no. of rows in matrix a\n");
    scanf("%d", &c);
    printf("Enter no. of columns in matrix a\n");
    scanf("%d", &d);
    printf("Enter elements of matrix a\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter no. of rows in matrix b\n");
    scanf("%d", &m);
    printf("Enter no. of columns in matrix b\n");
    scanf("%d", &n);
    printf("Enter elements of matrix b\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // if (d == m)
    // {
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    sum += a[i][k] + b[k][j];
                }
                result[i][j] = sum;
                sum = 0;
            }
        }
        printf("\n");
        // printing result
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d  ", result[i][j]);
            }
            printf("\n\n");
        }
    // }
    // else
    // {
        // printf("not applicable\n");
    // }
    return 0;
}