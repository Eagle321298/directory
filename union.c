// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int a;
//     char div;
//     char name[9];
// };

// int main()
// {
//     struct student s;
//     s.a = 72;
//     s.div = 'B';
//     strcpy(s.name, "godfather");
//     printf("%d\n", s.a);
//     printf("%c\n", s.div);
//     printf("%s\n", s.name);

//     return 0;
// }

// syntax of structure and union are same. only difference is structure require separate memory for each vaiable whereas in union single shared memory location n also give only one output at a time

#include <stdio.h>
#include <string.h>
union student
{
    int a;
    char div;
    char name[9];
};

int main()
{   union student s;
    s.a=72;
    s.div='B';
    strcpy(s.name,"godfather");
    // only last variable wil be print for others it will give garbage value
    printf("%d\n",s.a);
    printf("%c\n",s.div);
    printf("%s\n",s.name);

    return 0;
}