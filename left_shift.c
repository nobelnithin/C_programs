#include <stdio.h>

main(void){
    int a,b,c;
    a=10;
    b=1;
    while(b<a){
    c=(a<<b);
    printf("%d\n",c);
    b++;
    }

}