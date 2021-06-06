#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    int a, squareroot;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &a);
      
        squareroot = sqrt(a);
        printf("%d\n", squareroot);
        t--;
    }
    return 0;
}
