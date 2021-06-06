#include <stdio.h>
int main()
{
    //// when working with file we have to declare a pointer of type FILE
    FILE *ptr=NULL;
    // char str[100];
    // //for reading file
    // ptr=fopen("myfile.txt","r");
    // fscanf(ptr,"%s",&str);
    // printf("the content of this file is %s",str);


    // for writting file-writing mode vanish existing text in file 
    char str[34]="The Dear Godfather";
    ptr=fopen("myfile.txt","w");
    fprintf(ptr,"%s",str);
    

    return 0;
}



// for appending file, by append mode we can continue text witout clearing existing text 

// #include <stdio.h>
// int main()
// {
//     FILE *ptr=NULL;
//     char str[80]=" YOU are wonderful person";
//     ptr=fopen("myfile.txt","a");
//     fprintf(ptr,"%s",str);
//     return 0;
//     fclose(ptr);
// }