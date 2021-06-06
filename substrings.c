// Time difference of two cities
// Dhaka 11:20
// Kolkata 10:50
#include <stdio.h>
int main()
{     int dhhr,dhm,kohr,kom;
      scanf("%d%d",&dhhr,&dhm);
      scanf("%d%d",&kohr,&kom);
      printf("%u:%u\n",dhhr-kohr,dhm-kom);
      
      
      return 0;
}

