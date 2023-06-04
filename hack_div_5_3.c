#include <stdio.h>

void main()
{
    int num;
    scanf("%d",&num);
    if(num%3==0 && num%5!=0)
        printf("Hi");
    else if(num%5==0 && num%3!=0)
        printf("Hello");
    else 
       printf("HiHello");
}