#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
        char name[10];
        srand(time(NULL));
        printf("What is your name?\n");
        scanf("%s",name);
        printf("Hello %s !\n",name);

        printf("Rolling the dice\n");
        int x,y;
        x=rand()%6+1;
        y=rand()%6+1;
        int result = x+y;
        printf("Die 1: %d\n",x);
        printf("Die 2: %d\n",y);
        printf("Total value : %d\n",result);
        if(result>=7){
          printf("%s Won!\n",name);
        }
        else{
          printf("%s Lose!\n",name);

        }

        return 0;
}
