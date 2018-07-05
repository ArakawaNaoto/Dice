#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
        srand(time(NULL));
        printf("Rolling the dice\n");
        int x,y;
        x=rand()%6+1;
        y=rand()%6+1;
        printf("Die 1: %d\n",x);
        printf("Die 2: %d\n",y);
        printf("Total value : %d",(x+y));
        return 0;

}
