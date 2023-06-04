#include <stdio.h>

main(){
    int a, b,c;
    printf("Enter your value of A:");
    scanf("%d", &a);
    printf("Enter your value of B:");
    scanf("%d",&b);
    //printf("value of A is: %d \nvalue of B is: %d",a,b);
    c=a/b;
    printf("Addition of \'%d\' and \'%d \'is :\'%f\'",a,b,c);
}