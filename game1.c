#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnumber(int n)
{
    // this fun is used to generate random number
    srand(time(NULL));
    return rand() % n;
}
int greater(char compscore, char playerscore)
{
    // if c1>c2 returen 1 otherwise return 0 if c1=c2 return -1
    if ((compscore == 'r') && (playerscore == 's'))
    {
        return 1;
    }
    else if ((compscore == 's') && ( playerscore== 'r'))
    {
        return 0;
    }
    if ((compscore =='p') && (playerscore == 'r'))
    {
        return 1;
    }
    else if ((compscore== 'r') && (playerscore =='p'))
    {
        return 0;
    }
    if ((compscore == 's') && (playerscore == 'p'))
    {
        return 1;
    }
    else if ((compscore == 'p') && (playerscore == 's'))
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    printf("Welcome! Let's play stone, paper, scissor\n");
    int temp,playerchar, compchar,result,Cscore=0,Pscore=0;
    char dict[] = {'r', 'p', 's'},compscore, playerscore;
    for (int i = 0; i < 3; i++)
    {
        printf("enter 1 for Rock, 2 for paper and 3 for Scissor\n");
        printf("player turn's\n");
        // take player's input
        scanf("%d", &temp);
        getchar();
        playerchar = temp - 1;
        printf("%c\n", dict[playerchar]);
        playerscore=dict[playerchar];

        // computer's generate input
        printf("computer's turn's\n");
        compchar = randomnumber(3) + 1;
        printf("%c\n", dict[compchar - 1]);
        compscore=dict[compchar - 1];
        printf("\n");

        result=greater(compscore,playerscore);

        if (result == 1)
        {
            Cscore += 1;
            printf("CPU got it\n");
        }
        else if (result == 0)
        {
            Pscore += 1;
            printf("you got it\n");
        }
        else
        {
            Cscore += 1;
            Pscore += 1;
            printf("it's draw\n");
        }
        printf("YOU:%d\ncomputer:%d\n", Pscore, Cscore);
    }
    if (Pscore > Cscore)
    {
        printf("You win...CONGRATULATIONS:)\n");
    }
    else if (Cscore > Pscore)
    {
        printf("You loss :( , try next time ;)\n");
    }
    else
    {
        printf("It's draw\n");
    }

    return 0;
}

