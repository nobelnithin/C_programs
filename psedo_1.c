#include <stdio.h>

int main(){
    int val=37,n=0,i;
    int array[5]={34,23,32,37,12};
    for(i=0;i<5;i++){
        n+=1;
        if(array[i]==val)
          {printf("Found\n");
          printf("%d",n);}
          
        
    }
}