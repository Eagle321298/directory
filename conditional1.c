#include <stdio.h>

int main()
{int age;

    printf("enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n",age);
    if (age >= 18)
    {
        printf("you can vote!");
    }
    else if (age>=14)
    {
        printf("you can vote for senior student");
    }
    
    else if (age <14)
    {
        printf("you can vote for kids");
    }
    
    return 0;
}
