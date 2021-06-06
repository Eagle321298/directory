#include <stdio.h>

int main()
{int age;

    //printf("enter your age\n");
    scanf("%d",&age);
    switch (age)
    {
    case 4:
        printf("your age is 4\n");
        // break;
    case 20:
    
         printf("your age is 20\n"); //break - break the chain 
        //break;
                                                        
    case 32:
        printf("your age is 32\n");
        //break;
    
    default:

        printf("your agr is not 4,20 or 32\n");
        
    }


    
    return 0;
}
