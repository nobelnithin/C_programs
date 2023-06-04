#include <stdio.h>
#include <string.h>

main(void){
    char palin[10];
    int len,sign,i;
    printf("Enter your string: \n");
    scanf("%s",&palin);
    len=strlen(palin);
    for(i=0;i<len-1;i++){
        if(palin[i]!=palin[len-(i+1)]){
            sign=0;
            break;
        }
        else
           sign=1;
    }
    if(sign==1){
        printf("%s is a Palindrome",palin);
    }
    else 
        printf("%s is not a palindrome",palin);
}