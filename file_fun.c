#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("myfile.txt","r");

    // //////use of getc*****

    // char c= fgetc(ptr);
    // c= fgetc(ptr);
    // printf("The character i read was %c\n",c);
    // printf("The character i read was %c",c);



    // // //Use of gets *****
    char str[45];
    fgets(str,4,ptr);
    printf("the string is %s",str);
    printf("the string is %s",str);






    // use of fputc and fputs
    // ptr=fopen("myfile.txt","w");
    // fputc('s',ptr);
    // fputs("Sikandar Bhide\n",ptr);



    // r++mode
    // ptr=fopen("myfile.txt","r++");
    // fputc('s',ptr);
    // fputs("Sikandar Bhide\n",ptr);
    ////r++mode read and write from beginning without deleting existing text


    // w++mode
    // ptr=fopen("myfile.txt","w++");
    // fputc('s',ptr);
    // fputs("Sikandar Bhide\n",ptr);
    // // w++mode read and write from beginning by deleting existing text


    // a++mode
    // ptr=fopen("myfile.txt","a++");
    // fputc('s',ptr);
    // fputs("Sikandar Bhide\n",ptr);
    // a++mode read and write at the end of existing text, without deleting existing text

    return 0;
}