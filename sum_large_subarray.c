#include <stdio.h>

void main()
{
    int n,i=0,small,index,sum=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    small=array[0];
    for(i=0;i<n;i++)
    {
        if(array[i]>array[i+1])
        {
            small=array[i+1];
            index=i+1;
        }
    }
    array[index]=0;
    for(i=0;i<n;i++)
    {
        sum+=array[i];
    }
    printf("%d",sum);

}
