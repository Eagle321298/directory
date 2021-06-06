// //to find 3rd bit from right of 12 in binary---1 1 0 0
// // #include <stdio.h>
// // int main()
// // {
// //     int a = 12;
// //     int mask = 1;
// //     for (int i = 1; i <= 2; i++)
// //     {
// //         mask = mask << 1;
// //     }
// //     if (a & mask)
// //     {
// //         printf("1\n");
// //     }
// //     else
// //     {
// //         printf("0\n");
// //     }
// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int a, n;
//     int mask = 1;
//     printf("Enter value of a:\n");
//     scanf("%d", &a);
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         mask = mask << 1;
//     }
//     if (a & mask)
//     {
//         printf("1\n");
//     }
//     else
//     {
//         printf("0\n");
//     }

//     return 0;
// }

//set 4th bit to zero of 12 from the right--1 1 0 0
// #include <stdio.h>
// int main()
// {
//     int a = 12;
//     int mask = 1;
//     for (int i = 1; i <=3; i++)
//     {
//         mask = mask << 1;
//     }
//     mask = ~(mask);
//     a = a & mask;
//     printf("%d", a);
//     return 0;
// }

//set 5th bit to one of 12 from the right --- 0 1 1 0 0
// #include <stdio.h>
// int main()
// {
//     int a = 12;
//     int mask = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         mask = mask << 1;
//     }
//     a = mask | a;
//     printf("%d", a);
//     return 0;
// }

// to cheak wheather enter no. is odd or even by bit making
#include <stdio.h>
int main()
{
    int a, mask = 1;
    printf("Enter the number:\n");
    scanf("%d", &a);

    if (mask & a)
    {
        printf("Odd\n");
    }
    else
    {
        printf("even\n");
    }

    return 0;
}