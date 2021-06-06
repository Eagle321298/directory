// #include <stdio.h>
// #include <stdlib.h>

// int cmpfunc(const void *a, const void *b)
// {
//     return (*(int *)a - *(int *)b);
// }

// int main()
// {
//     int t, n, arr[100000], result = 0;
//     scanf("%d", &t);
//     scanf("%d", &n);

//     while (t > 0)
//     {

//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }

//         t--;
//     }
//     qsort(arr, n, sizeof(int), cmpfunc);
//     for (int i = 0; i < 2; i++)
//     {
//         result = arr[i] + result;
//     }
//     printf("%d\n", result);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int t, a, b, gcd, max;
//     scanf("%d", &t);
//     while (t > 0)
//     {
//         scanf("%d %d", &a, &b);
//         for (int i = 1; i <= a && i <= b; i++)
//         {
//             if (a % i == 0 && b % i == 0)
//             {
//                 gcd = i;
//             }
//         }

//         printf("%d ", gcd);
//         max = (a > b) ? a : b;

//         while (max > 0)
//         {
//             if (max % a == 0 && max % b == 0)
//             {
//                 printf("%d\n", max);
//                 break;
//             }
//             max++;
//         }
//         t--;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t, n, a, result[100], sum = 0;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                scanf("%d", &a);
            }
            if (i > 0)
            {
                qsort(result, i + 1, sizeof(int), cmpfunc);
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum = result[i] + sum;
        }
        printf("%d\n", sum);
    }

    return 0;
}