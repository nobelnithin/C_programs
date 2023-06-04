#include <stdio.h>
#include "signal.h"
#include "unistd.h"
#include "stdlib.h"

void fun(int signum);

int a;

int main(){

    signal(SIGINT,fun);

    while(1){
        printf("Go for the INFINITE loop\n");
        sleep(1);
        if(SIGINT==a){
            printf("Comming OUT_OF_LOOP after getting the signal Ctrl+C\n");
            break;
        }
    }
    return 0;
}

void fun(int signum){
    signal(SIGINT, fun);
    if(signum==SIGINT){
        printf("we get the signal %d\n",signum);
        a=signum;
    }
}