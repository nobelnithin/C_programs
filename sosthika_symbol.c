#include <stdio.h>

void main()
{
    int i,j,n=10;
    for(i=0;i<n;i++)
    {
        printf(" ");
        for(j=0;j<n;j++)
        {
            if((i==0)&&(j>n/2))
              printf("*");
        }
    }
}