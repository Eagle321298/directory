#include <stdio.h>

int main()
{int number,index=0;

    printf("enter a number\n");
    scanf("%d",&number);
    
    do
    {
        printf("%d\n",index);
        //'\n is used for new line character.'
        index= index + 1   ;
    } while (number > index);
    

    return 0;
}
