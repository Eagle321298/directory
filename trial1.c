// #include <stdio.h>
// int main()
// {
//     int T;
//     int N, sum = 0;
//     scanf("%d", &T);
//     while (T > 0)
//     {
//         scanf("%d", &N);
//         for (int i = 2; i < 22; i++)
//         {
//             if (N % i == 0)
//             {
//                 sum = sum + 1;
//             }
//         }

//         if (sum <= 1 && N != 1)
//         {
//             printf("yes\n");
//         }
//         else
//         {
//             printf("no\n");
//         }
//         sum = 0;
//         T--;
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int x;
//   float y;
//   scanf("%d %0.2f", &x, &y);

//   if (x > y && x % 5 == 0)
//     printf("%0.2f", y);
//   else if (x % 5 == 0)
//   {
//     y = (y - x) - 0.5;
//     printf("%0.2f", y);
//   }
//   else
//     printf("%0.2f", y);
//   return 0;
// }

#include <stdio.h>
int main()
{
  int t, a, b, gcd, max;
  scanf("%d", &t);
  while (t > 0)
  {
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a && i <= b; i++)
    {
      if (a % i == 0 && b % i == 0)
      {
        gcd = i;
      }
    }

    printf("%d ", gcd);
    max = (a > b) ? a : b;

    while (max > 0)
    {
      if (max % a == 0 && max % b == 0)
      {
        printf("%d\n", max);
        break;
      }
      max++;
    }
    t--;
  }

  return 0;
}