#include <stdio.h>

int main()
{
    int index = 1;

    do
    {
        printf("%d\n", index);
        index = index * 2;

    } while (index < 21);

    return 0;
}
