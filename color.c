// #include <stdio.h>
// void red () {
//   printf("\033[1;31m");
// }

// void yellow() {
//   printf("\033[1;33m");
// }

// void reset () {
//   printf("\033[0m");
// }

// int main () {
//   red();
//   printf("Hello ");
//   yellow();
//   printf("world\n");
//   reset();
//   return 0;
// }



// //Black \033[0;30m
// Red \033[0;31m
// Green \033[0;32m
// Yellow \033[0;33m
// Blue \033[0;34m
// Purple \033[0;35m
// Cyan \033[0;36m
// White \033[0;37m//





//for blinking text
// #include<stdio.h>
// #include<Windows.h>

// int main(){
//     int i;
//     for(i=0; i<10; i++)
//     {
//       printf(".....WEL COME.....");
//       Sleep(600);
//       system("cls");
//       Sleep(600);
//     }
//     getch();
//     return 0;
// }




#include <stdio.h>
 
int main()
{
    /* Some list of combinations 
      
    0 = Black 
    1 = Blue 
    2 = Green 
    3 = Aqua 
    4 = Red 
    5 = Purple 
    6 = Yellow 
    7 = White 
    8 = Gray
    9 = Light Blue
    A = Light Green
    B = Light Aqua
    C = Light Red
    D = Light Purple
    E = Light Yellow
    F = Bright White */
     
    printf("This is a console color change program\n");
    system("COLOR E1"); /* This will change the bgcolor F - White and textcolor to 2- Green */
     
    getchar();
    return 0;
}