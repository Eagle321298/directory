#include <stdio.h>

int fun()
{
    static int score = 10;
    printf("The score is %d\n", score);
    score++;
    return score + 2;
}
int main()
{
    printf("%d\n", fun());
    printf("%d\n",fun());
    printf("%d\n",fun());

    return 0;
}






// #include <stdio.h>

// int fun()
// {static int score=b;
// // point to remember// static variable required constant value otherwise it's show an "<error>"it does not accept variable=b n all
//     printf("The score is %d\n",b);
//     b++;
//     return b+2;
// }
// int main()
// {   int b=5
//     printf("%d\n",fun());
//     printf("%d\n",fun());
//     printf("%d\n",fun());

//     return 0;
// }







// #include <stdio.h>
// // if we didn't put any value in score then it will take 0 as default value
// int fun()
// {
//     static int score;
//     printf("The score is %d\n", score);
//     score++;
//     return score + 2;
// }
// int main()
// {
//     printf("%d\n", fun());
//     printf("%d\n", fun());
//     printf("%d\n", fun());

//     return 0;
// }