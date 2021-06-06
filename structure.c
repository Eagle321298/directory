#include <stdio.h>
#include <string.h>

struct class
{
    char name[34];
    int id;
    char grade;
};

int main()
{
    struct class s1, s2, s3;
    s1.id = 34;
    s2.id = 87;
    s3.id = 77;
    s1.grade = 'A';
    s2.grade = 'B';
    s3.grade = 'c';
    strcpy(s1.name,"Rutika");
    strcpy(s2.name,"Supriya");
    strcpy(s3.name,"Priti");
   
    printf("%d\n", s1.id);
    printf("%d\n", s2.id);
    printf("%d\n", s3.id);
    printf("%c\n", s1.grade);
    printf("%c\n", s2.grade);
    printf("%c\n", s3.grade);
    printf("%s\n", s1.name);
    printf("%s\n", s2.name);
    printf("%s\n", s3.name);

    return 0;
}