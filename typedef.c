#include <stdio.h>
#include <string.h>
// in typedef we can call struct variable by different name like here we call by godfather and eagle
typedef struct godfather
{   char name[12];
    char fav_word[18];
    int bdate;
    char compliment[184];
    
}eagle;

int main()
{   
    // /struct godfather s;
    eagle s;
    strcpy(s.name,"Rutika");
    s.bdate=28;
    strcpy(s.fav_word,"inkey pinky ponkey");
    strcpy(s.compliment,"fail fail fail again and again, then rise like phoenix");
    printf("%s\n",s.name);
    printf("%d\n",s.bdate);
    printf("%s\n",s.fav_word);
    printf("%s\n",s.compliment);

        
    return 0;
}