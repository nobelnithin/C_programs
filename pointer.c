#include <stdio.h>

void main(){
    int x=5;
    int *pointer=&x;
    printf("Pointer: %i\n",*pointer);
    printf("Value: %i\n",x);
    printf("address: %p",&x);

}