#include <stdio.h>   //It's ossum !!!
int main()
{
    int a = 45;
    int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 1);
    // printf("%d\n",ptra+2);

    //int a = 45;
    //int *ptra = &a;
    printf("%d\n",ptra);
    ptra++;
    // // ptra--;
    // printf("%d\n",ptra);
    // printf("%p\n", ptra);
    // printf("%p\n", ptra + 1); //0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F it's all about numbering systems (hexadecimal)
    // printf("%p\n", ptra + 3);
    // printf("%p\n", ptra - 1);

    //char a = '38';
    //char *ptra = &a;
    //printf("%d\n",ptra);
    //ptra++;
    //printf("%d\n",ptra+1);
    //printf("%d",ptra-1);
    //printf("%p\n",ptra);
    //printf("%p\n",ptra+1);
    //printf("%p\n",ptra-1);

    return 0;
}