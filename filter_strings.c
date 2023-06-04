#include "stdio.h"
#include "string.h"

int main(){
    char str[100]={
        "nithin with noble is noble"
    };
    char *sub;
    sub=strstr(str,"nithin");
    printf("\nSubstring is : %s",sub);
    return 0;
}