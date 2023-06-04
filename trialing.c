#include <stdio.h>
int  main()//finding trialing zeros in a number's factorials

{
    int n,count,a=5;
    scanf("%d",&n);
    while(n/a!=0)
    {
        count=count+(n/a);
        a=a*5;
    }
    printf("%d",count);
}