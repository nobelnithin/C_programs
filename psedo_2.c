#include <stdio.h>

int main(){
    int y=2,z=4;
    if((y||z)&&(z||y)==4)
        printf("a");
    if((y||z)&&(z||y)==0)
        printf("b");
    if((y||z)&&(z||y)==2)
    printf("c");
    if((y||z)&&(z||y)==1)
    printf("d");

}