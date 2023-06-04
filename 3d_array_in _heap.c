#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,r;
    scanf("%d%d%d",&p,&q,&r);
    int j,i,k,***a;
    a=(int***)malloc(sizeof(int)*p);
   for(i=0;i<p;i++)
   {
     *(a+i)=(int**)malloc(sizeof(int*)*q);
     for(j=0;j<q;j++)
     {
        *(*(a+i)+j)=(int*)malloc(sizeof(int)*r);
     }
   }
   for(i=0;i<p;i++)
    for(j=0;j<q;j++){
        for(k=0;k<r;k++){
   {
      scanf("%d",*(*(*a+i)+j)+k);//&a[i][j][k]
   }
        }
    }
       for(i=0;i<p;i++)
    for(j=0;j<q;j++){
        for(k=0;k<r;k++){
   {
      printf("%d",*(*(*a+i)+j)+k);//&a[i][j][k]
   }
        }
    }
}