#include <stdio.h>
#include <conio.h>


int main(){
    int a[5]=[2,3,5,6,4];
    int x[5];
    x[5]=a.splice(2);
    printf("%d",x[5]);
    return 0;
}