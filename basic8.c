#include <stdio.h>

int main()
{
    char a, b;
    int c = 5, d = 4;

    scanf("%c\n%c", &a, &b);
    if (a == b)
    {
        printf("c=5");
    }
    if (a != b)
    {
        printf("d=4");
    }

    return 0;
}
