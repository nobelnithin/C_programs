#include <stdio.h>
#include <stdlib.h>

int random();
main(void){
    int i;
    for(i=0;i<10;i++){
        printf("\n%d",random());
    }
}

int random(){
     int num;
     num=rand();
     return num;
}