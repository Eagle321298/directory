#include <stdio.h>
int main()
{
    int rows, space, result = 1;
    printf("enter no of rows you want\n");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                result = 1;
            }
            else
            {
                result = result * (i - j + 1) / j;
            }
            printf("%4d ", result);
        }
        printf("\n");
    }

    return 0;
}