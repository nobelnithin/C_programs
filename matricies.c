#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int matrix[c][r];
    for(int i=0;i<c;i++)
       for(int j=0;i<r;j++)
          scanf("%d",&matrix[i][j]);


    for(int i=0;i<c;i++)
      for(int j=0;j<r;j++)
         printf("%d",matrix[i][j]);
}