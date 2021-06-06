#include <stdio.h>
int main()
{
    int n, remainder, reverse = 0, original;
    printf("Enter the number:\n");
    scanf("%d", &n);
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    // here value of n is change after while loop that's why we write original=n so that we can get orginal entered value for our concenience
    if (reverse == original)
    {
        printf("%d is palindrome number\n",original);
    }
    else
    {
        printf("%d is not palindrome number",original);
    }

    return 0;
}


