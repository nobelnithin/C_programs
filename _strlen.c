#include <stdio.h>
#include <string.h>

void main(){
    char str[100];
    printf("String:");
    scanf("%s",str[100]);

    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    printf("%d",i);

}