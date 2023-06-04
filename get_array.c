#include <stdio.h>

void main()
{
    int n=5;
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
        printf("%d",array[i]);
}