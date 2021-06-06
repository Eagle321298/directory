#include <stdio.h>
int main()
{
    int t, a, b, d = 0;
    float c;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d%d", &a, &b);
        c = a / b;
        if (c > 1.6 && c < 1.7)
        {
            d++;
        }
        t--;
    }
    printf("%d\n", d);

    return 0;
}