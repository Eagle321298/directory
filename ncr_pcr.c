////////nCr//////////
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n = n * factorial(n - 1));
    }
}


int main()
{int n,r,a,b;
    scanf("%d%d",&n,&r);
    a=factorial(n);
    b=factorial(r)*factorial(n-r);
    printf("%d\n",a/b);

    return 0;
}


// nPr=n!/(n-r)!

