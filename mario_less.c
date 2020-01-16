#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int pyramid(int pyramid_height ){
    int i,j,k;
    for (i=1; i<=pyramid_height; ++i) {
         for(k=pyramid_height ; k>i ; --k)
            {
                printf(" ");}
             for(j=0;j<i;j++){
                    printf("#"); }
             printf("\n");}
        return 0;}

int main(void)
{
    int pyramid_height;
    char ch[100];
    do{
        printf("How tall would you like your pyramid to be? ");
        scanf("%i", &pyramid_height);
        fgets(ch, 100, stdin);
    }while(pyramid_height<=0 || pyramid_height>=9);

        pyramid(pyramid_height);
}
