#include <stdio.h>
#include <stdlib.h>
void main()
{
      int *a;
      a=(int *)malloc(sizeof(int)*1);
      *a=10;
      printf("%d",*a);

      int *b;
      b=(int *)malloc(sizeof(int)*1);
      scanf("\n%d",b);
      printf("%d",*b);
      free(a);
      free(b);
}