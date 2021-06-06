#include <stdio.h>
// without argument with return value

int takenumber()
{   int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    return n;
}

int main()
{ int c;
    c=takenumber();
    printf("The entered number is %d",c);
    return 0;
}