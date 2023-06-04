#include <stdio.h>

int main(){
    int a[10],i,len,adder;
    adder=0;
    for(i=0;i<10;i++){
         scanf("%d",&a[i]);
         if(a[i]>=80)
           adder+=1;
         }
    printf("Number of students scored more than 80 is %d\n",adder);
    for(i=0;i<10;i++){
        if(a[i]>=80){
            printf("Roll No %d-->%d\n",i+1,a[i]);
        }
    }
}