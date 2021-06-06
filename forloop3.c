#include <stdio.h>

int main()
{int i,j;
    for ( i = 0,j=0; i < 5,j<6; )
    {
        printf("%d %d\n",j,i);
        i++,j++;//hence expression 3 is optional
    }
    
    
    return 0;
}
