#include <stdio.h>

int main()
{
    int a, remainder, cube = 1, sum = 0, original, num = 0, b;
    printf("enter the number:\n");
    scanf("%d", &a);
    original = a;
    b = a;
    while (a > 0)
    {
        a = a / 10;
        num = num + 1;
    }

    while (b > 0)
    {
        remainder = b % 10;
        for (int i = 0; i < num; i++)
        {
            cube = cube * remainder;
        }
        sum = cube + sum;
        cube = 1;

        b = b / 10;
    }
    printf("the sum is %d\n", sum);
    if (original == sum)
    {
        printf("%d is an armstrong number\n", original);
    }
    else
    {
        printf("%d is not an armstrong number\n", original);
    }

    return 0;
}
// code successful :) try by me only