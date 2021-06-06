#include <stdio.h>  
int main()
{double first,second,temp;

    

    scanf("%lf\n%lf",&first,&second);
    

    temp=first;
    first=second;
    second=temp;
    printf("after swapping, first number:%0.2lf\n",first);
    printf("after swapping, second number:%0.2lf",second);


    
    return 0;
}