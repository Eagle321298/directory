// #include <stdio.h>
// //hollow square pattern
// int main()
// {
//     int n, i, j;
//     printf("enter no. of rows:\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == n)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }





// //solid triangle
// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter no. of rows:");
//     scanf("%d", &rows);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int space = 1; space < rows - i; space++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j <= 2 * i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }








//solid square
// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter no. of rows:");
//     scanf("%d", &rows);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int space = 1; space < rows - i; space++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j <= 2 * i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int k = rows - 1; k > 0; k--)
//     {
//         for (int spac = 1; spac <= rows - k; spac++)
//         {
//             printf(" ");
//         }
//         for (int j = 2 * k - 1; j > 0; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }






//solid rectangle
// #include <stdio.h>
// int main()
// {
//     int rows, col;
//     printf("enter no. of rows and column:\n");
//     scanf("%d%d", &rows, &col);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }







//hollow rectangle
// #include <stdio.h>
// int main()
// {
//     int rows, col;
//     printf("enter no. of rows and column:\n");
//     scanf("%d%d", &rows, &col);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == rows || j == 1 || j == col)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }








//hollow triangle
// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter no. of rows:");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int space = 1; space <= rows - i; space++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             if (i == 1 || i == rows || j == 1 || j == 2 * i - 1)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





//hollow hexagonal
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter no. of rows:");
    scanf("%d", &rows);
    //uppertriangular pattern
    for (int i = 0; i < rows / 3 + 1; i++)
    {
        for (int space = 1; space < rows / 3 + 1 - i; space++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0 || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    //for middlepart
    for (int i = 0; i < rows / 3; i++)
    {
        for (int j = 0; j <= 2 * rows / 3 - 1; j++)
        {
            if (j == 0 || j == 2 * rows / 3 - 1)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    // endpart
    for (int i = rows / 3 + 1; i > 0; i--)
    {
        for (int space = i; space < rows / 3 + 1; space++)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            if (j == i || j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
    }
    return 0;
}
