#include <stdio.h> //with argument and with return value
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    a = 5;
    b = 6;
    c = sum(a, b);
    printf("the sum is %d\n", c);

    return 0;
}
