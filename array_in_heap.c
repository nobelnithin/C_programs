#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int n,*a;
    scanf("%d",&n);

    a=(int *)malloc(sizeof(int)*n);//create array in heap
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    for(int i=0;i<n;i++)
        printf("%d ",(a+i));
}