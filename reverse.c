#include <stdio.h>
#include <string.h>

void main()
{
    char str[1000];
    scanf("%s",str);
    char temp;
    int len=strlen(str)-1;
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-i];
        str[len-i]=temp;
    }
    printf("%s",str);
}