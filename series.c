#include <stdio.h>

void main()
{
    //3 4 33 34 43 44 333 334 343 344 433
    int n,ans=0,tem=1;
    scanf("%d",&n);
    while(n!=0)
    if(n%2==0)
    { 
        ans=4*tem+ans;
        tem*=10;
        n=(n/2)-1;
    }
    else
    {
        ans=3*tem+ans;
        tem*=10;
        n=n/2;
    }
    printf("%d",ans);
}