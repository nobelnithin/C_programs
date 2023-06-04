#include <stdio.h>

int main()
{
    int n=300;
    int *ip;
    ip=&n;
    char *cp;
    cp=&n;
     printf("%d %d\n",*ip,*cp);
    *cp=1;
    printf("%d %d",*ip,*cp);
}