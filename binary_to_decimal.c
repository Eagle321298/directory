#include <stdio.h>
#include <math.h>
int main()
{
    int b, n = 0, remainder, sum = 0, t, org;
    printf("Enter binary number\n");
    scanf("%d", &b);
    org = b;
    while (b > 0)
    {
        b = b / 10;
        n++;
    }
    printf("%d\n", n);
    for (int i = n - 1; i >= 0; i--)
    {
        remainder = org % 10;
        printf("%d\n", remainder);
        t = remainder * pow(2, i);
        sum = sum + t;
        printf("%d\n", sum);
        org = org / 10;
    }
    printf("%d\n", sum);

    return 0;
}