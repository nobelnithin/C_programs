#include <stdio.h>
#include <string.h>

void main(){
    int n,i;
    printf("Enter the number of words to sort:\n ");
    scanf("%d",&n);
    char array[n][20];
    for(i=0;i<n;i++){
        printf("Enter your string %d: ",i+1);
        scanf("%s",&array[i][15]);

    }
    for(i=1;i<=n;i++){
        printf("%s\n",array[i-1]);
    }
}