#include <math.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int owed(float change){
   int coin;
   while(change >= 0){
       coin = (change/25);
       change = change - (coin * 25);
       if (change == 0){printf("%d\n", coin);break;}

       coin = coin + (change/10.0);
       change = change - ((floorf(change/10)) * 10);
       if (change == 0){printf("%d\n", coin);break;}

       coin = coin + (change/5);
       change = change - (floorf(change/5) * 5);
       if (change == 0){printf("%d\n", coin);break;}

       coin = coin + (change/1);
       change = change - (floorf(change/1) * 1);
       if (change == 0){printf("%d\n", coin);break;}

       else
           printf("%d\n", coin);
}      return 0;
}

int main()
{
    float change;
    do{
       change = get_float("Change owed: ");
      }while(change<0);
    change = change * 100;
    owed(change);
}
