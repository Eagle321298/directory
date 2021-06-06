#include <stdio.h>

int main()
{int i,j;
    for ( i= 2,j=0; i <5,j<8; i++,j++)
    //in expression2 we can enter multiple condition but loop will iterate until last condition is false,other condition wil treated as statement
    {
        printf("%d %d\n",i,j);
    }
    
    return 0;
}
