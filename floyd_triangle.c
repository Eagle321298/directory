#include <stdio.h>
int main()
{
    int rows, a, sum = 1;
    printf("enter no. of rows you want\n");
    scanf("%d", &rows);
    printf("enter 1 if you want uppertriangular pattern else 0 for lower triangula patter\n");
    scanf("%d", &a);
    if (a == 1)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d  ", sum);
                sum = sum + 1;
            }
            printf("\n");
        }
    }
    else 
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = rows; j > i; j--)
            {
                printf("%d  ", sum);
                sum = sum + 1;
            }
            printf("\n");
        }
    }

    return 0;
}