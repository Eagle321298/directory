#include <stdio.h>
int main()
{
    int rows, a;
    printf("enter no. of rows you want in pattern\n");
    scanf("%d", &rows);
    printf("enter 0 if you want uppertriangula pattern otherwise 1 for lowertiangular pattern\n");
    scanf("%d", &a);
    if (a == 0)
    {

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c", 'A' + i);
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
                printf("%c", 'A' + i);
            }
            printf("\n");
        }

        return 0;
    }
}