#include <stdio.h>
int main()
{
    int base_number, exponent, result = 1;
    printf("enter basenum and exponent\n");
    scanf("%d", &base_number);
    scanf("%d", &exponent);
    while (exponent > 0)
    {
        result = base_number * result;
        exponent--;
    }
    printf("%d", result);
    return 0;
}