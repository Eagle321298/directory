// #include <stdio.h>
// int main()
// {
//     char num='\010';
//     printf("%d",num);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("Localhost\n");
//     printf("%10s","coder");
//     return 0;
// }

// #include <stdio.h>

// ***********NOT GETTING IT***********

// int main()
// {
//     int a;
//     a=printf("")||printf("Follow")&&printf("me");
//     printf("%d",a);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int y=0;
//     int x=(~y==-1); //here ~y=y-1 means when y=0 ~y==-1 become true so it will print value of x as 1
//     printf("%d",x);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int long long a[20],sum=0;
//     int n;
//     scanf("%lld", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("%lld\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     a = b = c = 10;
//     c = a++ || b++ && ++c;///***********can't get this line******************
//     printf("%d %d %d", c, a, b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char x = 0xff;//**************didnt got it**************
//     printf("%x\n", x);//x is hexadecimal format specifier

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i=5, j=10,num;
//     num=++i, ++j;
//     printf("%d %d %d", num, i,j);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x=0,k;
//     while (+(+x--)!=0)//unary + and - is only dummy operator in c/c++ , (+(+x--)!=0)can be written as (x--!=0)
//     {
//         x++;
//     }
//     printf("%d",x);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {   char c='c';
//     printf("%c",c++);
//     printf("%c",++c);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int var = 0x3a2d6f; //0x before the number, prenteds the number to be hexadecimal
//     printf("%X", var);  //   capital X-output in uppercase
//                         //   x-output in lowercase
//     return 0;
// }



#include <stdio.h>
int main()
{
    char p[]="%d";///variable p is declared as an array ofcharacter and initialized with integer %d
    char q[]="%c";///initialized with %c
    printf(p,3);
    printf("\n");
    printf(q,3);////(q,3) will print heart symbol
    /////try it--just for fun--replace 3 by 5,16,1,2,3,4,6,11,12,14,15,16,18,19,24,25,26,29,30,31
    return 0;
}