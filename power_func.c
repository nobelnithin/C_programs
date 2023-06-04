#include <stdio.h>

//int power(int m,int n);
/*void nithin(){
       int age=19;}
    */

int main(){
    int base=2;
    int exp=6;
    int pwr;
    //printf("---%d power %d is %d---\n",base, exp,power(base,exp));
    //printf("%d",age);
    pwr=power(base,exp);
    printf("%d",pwr);


}

int power(b,e){
    int i;
    int p=1;
    for(i=0;i<e;i++){
        p=p*b;
        return p;}
}