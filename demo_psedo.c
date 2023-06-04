#include <stdio.h>

int main(){
   int d=2;
   d=d|(d<<d);
   printf("%d",d);
}