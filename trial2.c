// #include <stdio.h>
// int main()
// {
//     int l, b, a, p;
//     scanf("%d%d", &l, &b);
//     a = l * b;
//     p = 2 * (l + b);
//     if (a > p)
//     {
//         printf("Area\n");
//         printf("%d\n", a);
//     }
//     else if (a < p)
//     {
//         printf("Peri\n");
//         printf("%d\n", p);
//     }
//     else
//     {
//         printf("Eq\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); //returned value cheak wheather a is come before or after the b
}

int main()
{
    int t;
    int a,b,c,p,s[1000];
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        p=a+b+c/2;
        s[i]=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%d\n",s[i]);
    }
    qsort(s,t,sizeof(int),cmpfunc);
    for (int i = 0; i < t; i++)
    {
        printf("%d%d%d\n",a,b,c);
    }
    
    return 0;
}