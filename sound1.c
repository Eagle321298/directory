// #include <stdio.h>
// #include <windows.h>

// // Driver Code
// int main()
// {
//     int x;

//     // Loop for sound Jingle
//     for (x = 0; x < 2; x++) {
//         Beep(523, 500);
//     }

//     // sound Bell
//     Beep(523, 800);

//     Sleep(200);

//     // Loop for sound Jingle
//     for (x = 0; x < 2; x++) {
//         Beep(523, 500);
//     }

//     // sound Bell
//     Beep(523, 800);

//     // Sound for rest of the tone
//     Sleep(200);

//     Beep(523, 500);

//     Sleep(50);

//     Beep(659, 400);

//     Sleep(50);

//     Beep(440, 400);

//     Sleep(50);

//     Beep(494, 400);

//     Sleep(50);

//     Beep(523, 750);

//     Sleep(400);

//     Beep(600, 400);

//     Sleep(100);

//     Beep(600, 350);

//     Sleep(200);

//     Beep(600, 300);

//     Sleep(150);

//     Beep(600, 250);

//     Sleep(150);

//     Beep(600, 150);

//     Sleep(150);

//     Beep(550, 250);

//     Sleep(150);

//     Beep(555, 350);

//     Sleep(50);

//     Beep(555, 200);
//     Sleep(150);

//     Beep(555, 200);

//     Sleep(150);

//     Beep(690, 200);

//     Sleep(150);

//     Beep(690, 200);

//     Sleep(150);

//     Beep(610, 200);

//     Sleep(150);

//     Beep(535, 160);

//     Sleep(100);

//     Beep(500, 150);

//         Beep(500, 50);

//     Sleep(200);

//     Beep(700, 200);

//     return 0;
// }

#include <stdio.h>
#include <windows.h>

void yellow()
{
    printf("\033[1;33m");
}
void red()
{
    printf("\033[1;31m");
}
void blue()
{
    printf("\033[1;34m");
}
void white()
{
    printf("\033[1;37m");
}
void purple()
{
    printf("\033[1;35m");
}
void cyan()
{
    printf("\033[1;36m");
}

void green()
{
    printf("\033[1;32m");
}
void reset()
{
    printf("\033[0m");
}
int main()
{

    for (int i = 0; i < 5; i++)
    {

        Beep(240, 800);
        yellow();
        printf("Sa\n");

        Sleep(200);

        Beep(254, 500);
        red();
        printf("Re\n");

        Sleep(50);

        Beep(285, 400);
        blue();
        printf("ga\n");

        Sleep(50);

        Beep(320.36, 750);
        white();
        printf("ma\n");

        Sleep(100);

        Beep(359.60, 350);
        purple();
        printf("pa\n");

        Sleep(200);

        Beep(380.98, 300);
        cyan();
        printf("da\n");

        Sleep(150);

        Beep(453.06, 250);
        yellow();
        printf("ni\n");

        Sleep(150);

        Beep(480, 350);
        green();
        printf("sa\n");

        Sleep(50);
        system("cls");
    }

    return 0;
}