#include <stdio.h>

int main()
{
   int h,m,s;
   scanf("%d:%d:%d",&h,&m,&s);
   if((h>=0 && h<=23) && (m>=0&&m<=59) && (s>=0&&s<=59))
    printf("Valid");
else
     printf("Not Valid");
   return 0;
}