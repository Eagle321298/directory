// #include <stdio.h>

// // method1

// int main()
// {int a;
//     printf("enter 0 if you want upper triangular strar pattern or 1 for reverse triangular pattern\n");
//     scanf("%d",&a);
//     switch (a)
//     {
//     case 0:
//         printf("*\n");
//         printf("**\n");
//         printf("***\n");
//         printf("****\n");

//         break;
//     case 1:
//         printf("****\n");
//         printf("***\n");
//         printf("**\n");
//         printf("*\n");
//     default:
//         printf("you have entered no. other than 1 or 0");
//         break;
//     }

//     return 0;
// }








// method2

// #include <stdio.h>

// void starpattern(int rows,int a)
// {
//     if (a == 0)
//     // for uppertriangular star pattern
//     {
//         for (int i = 0; i < rows; i++)
//         // this for loop is used to get required rows
//         {
//             for (int j = 0; j <= i; j++)
//             // this for loop is used to get required no. of stars
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
//     else if (a==1)
//     // for reverse triangular star pattern
//     {
//         for (int x =0; x < rows; x++)
//         {
//             for (int y =rows; y> x; y--)
//             {
//                 printf("*");
//             }
//          printf("\n");
//         }

//     }
// }

// int main()
// {
//     int rows, a;

//     printf("enter number of rows you want\n");
//     scanf("%d", &rows);
//     printf("enter 0 if you want upper triangular star pattern or 1 for reverse triangular star pattern\n");
//     scanf("%d", &a);

//     starpattern(rows,a);

//     return 0;
// }








// for pascal's star pattern
#include <stdio.h>
int main()
{
   int rows, k = 0;
   printf("enter no. of rows you want\n");
   scanf("%d", &rows);
   for (int i = 1; i <= rows; i++,k=0)
   {
      for (int space = 1; space <= rows - i; space++)
      {
         printf("  ");
      }
      while (k != 2 * i - 1)
      {
         printf("* ");
         k++;
      }
      printf("\n");
   }

   return 0;
}