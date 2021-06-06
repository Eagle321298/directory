#include <stdio.h>
int main()
{   int a,cube=1;
    printf("enter the number of which you want cube:\n");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        cube=a*cube;
    }
    printf("%d",cube);
    return 0;
}