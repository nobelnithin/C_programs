#include <stdio.h>

main(){
    int num1,num2,num3,tans,ans;
    printf("\nEnter number 1: ");
    scanf("%d",&num1);
    printf("\nEnter number 2: ");
    scanf("%d",&num2);
    printf("\nEnter number 3: ");
    scanf("%d",&num3);  
    if(num1>num2){
        tans=process(num1,num2);
    }  
    else{
        tans=process(num2,num1);
    }
    if(tans>num3){
         ans=process(tans,num3);
    }
    else{
        ans=process(num3,tans);
    }
    printf("%d",ans);
}

int process(x,y){
    int val=x%y;
    if(val==0){
        return y;
    }
    else{
        process(val,y);
    }

    
}