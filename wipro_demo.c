#include <stdio.h>

int main(){
    int n=8;
    int x[]={
     10 ,98 ,3 ,33 ,12 ,22 ,21 ,11
    };
    int i=0;
    while(i<n){
        if(x[i]%2==0)
           printf("\nEven");
        else
          printf("\nodd");
        
       i++;
    }

}