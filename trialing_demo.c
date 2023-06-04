#include <stdio.h>

int main()
{
    int n,rem,count=0;
    long long int product=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       product*=i;
    }
    printf("%d\n",product);
    while(product!=0)
    {
        rem=product%10;
        if(rem==0)
           count+=1;
           break;
        product/=10;
    }
}