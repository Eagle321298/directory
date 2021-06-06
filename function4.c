// #include <stdio.h>
// // without argument without return value

// void takenumber()
// {
//     int n;
//     printf("enter the number :\n");
//     scanf("%d", &n);
// }
// void takenumber();
// int main()
// {
//     takenumber();

//     return 0;
// }

// code to cheack whether enterd number is primen number or not

// #include <stdio.h>

// void cheackprime()
// {
//     int a, n;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//     {
//         printf("%d is not prime number", n);
//     }
//     else if (n % 2 != 0)
//     {
//         printf("%d is  prime number");
//     }
// }
// void cheackprime();
// int main()
// {
//     cheackprime();
//     return 0;
// }

// the above code will show error when we will put n is equal to 2 it's not that good code, so refer the code given below . i written this code just for my understanding :(




#include <stdio.h>
void checkPrimeNumber()
{
    int n, i, flag ;

    printf("Enter a positive inteer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}

void checkPrimeNumber();

int main()
{
    checkPrimeNumber(); // argument is not passed
    return 0;
}

// return type is void meaning doesn't return any value
