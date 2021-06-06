#include <stdio.h>
int main()
{
    int n, next_term, t1 = 0, t2 = 1;
    printf("enter term upto which you want fibonacci series\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", t1);
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }

    return 0;
}