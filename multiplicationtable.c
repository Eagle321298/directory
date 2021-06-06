#include <stdio.h>
int main()
{
    int num;
    printf("enter the number of which you want table:\n");
    scanf("%d", &num);
    printf("the multiplication table of %d is as follow:\n", num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d= %d\n", num, i, num * i);
    }

    return 0;
}
