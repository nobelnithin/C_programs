#include <stdio.h>

int main(void)
{
    int x,y;
    x=4,y=2;
    int *prt1=&x,*prt2=&y;
    printf("%i\n",*prt1+*prt2);
    printf("%d",x+y);
}