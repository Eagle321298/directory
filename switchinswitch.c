#include <stdio.h>

int main()
{
    int age, marks;

    printf("enter your age\n");
    scanf("%d", &age);

    printf("enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 4:
        printf("your age is 4\n");
        switch (marks)
        {
        case 35:
            printf("your marks is 35\n");
            break;

        default:
            printf("your age is not 35\n");
        }
        break;
    case 20:
        printf("your age is 20\n"); //break - break the chain
        break;

    case 32:
        printf("your age is 32\n");
        //break;

    default:

        printf("your agr is not 4,20 or 32\n");
    }

    return 0;
}