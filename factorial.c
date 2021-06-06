// *******MEHTOD 1*******///

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
{int num;
    printf("enter the number of which you want factorial\n");
    scanf("%d",&num);
    printf("factorial of %d is %d\n",num,factorial(num));

    return 0;
}









//******** METHOD 2*******///


// #include <stdio.h>
// int main()
// {
//     int t,n,result=1;
//     scanf("%d",&t);
//     while (t>0)
//     {
//         scanf("%d",&n);
//         if (n==0)
//         {
//             printf("1\n");
//         }
//         else
//         {
//             for (int i =1; i <= n; i++)
//             {
//                 result=result*i;
//             }
//             printf("%d\n",result);
//         }
//         result=1;
//         t--;
//     }
    

//     return 0;
// }
