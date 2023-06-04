#include <stdio.h>

main(){
    int num, temp ,sum=0, rem;

    printf("Enter your number: ");
    scanf("%d",&num);

    temp=num;
    while (temp>0){
        rem =temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;

    }
    if (sum==num){
          printf("%d is an Armstrong number.",num);
    }

    else{
        printf("%d is not an Armstrong number.",num);
    }
}




