// // #include <stdio.h>
// int main()
// {
//     char str[1000],sum=0;
//     scanf("%s",&str);
//     for (int i = 0; i < 100; i++)
//     {
//         if (str[i]==0)
//         {
//             sum++;
//         }

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
    int t, n, a[1000], b,c;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), cmpfunc);
        for (int i = 0; i < n; i++)
        {
            printf("%d \n", a[i]);
            b = a[i]++;
            c = a[i + 1];
            printf("%d %d\n", b, c);
        }

        t--;
    }

    return 0;
}