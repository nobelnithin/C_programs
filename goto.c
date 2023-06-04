#include <stdio.h>

void main(){
    int i=0,n=3;
    goto loop_cond;
    loop_body:
       i++;
    loop_cond:
       if(i<n){
           printf("nithin\n");
           goto loop_body;
       }
}