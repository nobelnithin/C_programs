#include <stdio.h>

main(void){
    int x;
    int y;
    printf("Enter your first number: ");
    scanf("%d",&x);
    printf("Enter your second number:");
    scanf("%d",&y);

    if(x>y)
    
        printf("%d is greater than %d", x,y);
    else
        printf("%d is greater than %d",y,x);
}