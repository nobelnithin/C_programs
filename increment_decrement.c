#include <stdio.h>

void main(){
    int x=0;
    int numb=1;
    int increment=++numb;
    printf("this is increment %d\n",increment);
    while(x<5){
        printf("noble\n");
        ++x;
        printf("now x is: %d\n",x);
    }

}