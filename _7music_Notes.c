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
    char p[]="%c";                    //for musical sign
    for (int i = 0; i < 5; i++)
    {

        Beep(240, 800);
        yellow();
        printf("Sa\n");
        printf(p,14);

        Sleep(200);

        Beep(254, 500);
        red();
        printf("\nRe\n");

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