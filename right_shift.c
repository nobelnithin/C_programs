#include <stdio.h>

main(void){
    int a, b,c;
    a=3;
    b=1;
    while(a>b){
        c=a>>b;
        printf("%d\n",c);
        b++;
    }
    printf("%d",b);
    
}