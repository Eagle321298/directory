// #include <stdio.h>
// // call by reference-swapping
// void swap(int *x,int *y)
// {   int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main()
// { int a=34,b=74;
//     printf("%d and %d\n",a,b);
//     swap(&a,&b);
//     printf("%d and %d\n",a,b);

//     return 0;
// }



// we can change value of main variable in function by using call by reference concepts

#include <stdio.h>

void change(int *a)
{ *a=78;

    
}

int main()
{
    int a=34;
    printf("the value of a = %d\n",a);
    change(&a);
    printf("the changed value of a=%d\n",a);
    return 0;
}










