#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(int);

void main(){

    int n;
    int i;
    int t[i];
    printf("n: ");
    printf("i: ");
    for(int j=0;j<i;j++){
        printf("Enter the t:");
        scanf("%d\n",&t[j]);
    }
    for(int j=0;j<i;j++){
        if(check(n)==1)
        {
          if(n<=10000 && t[j]%100==0){
            n=n+t[j];
            printf("Credit: Successful\n");
          }  
          else
             printf("Credit: Failed\n");
        }
        else if(check(n)==0)
        {
            if(t[j]>n && t[j]%100==0){
                n=n-t[j];
                printf("Debit: Successfully\n");
            }
            else
               printf("Debit: Failed\n");
        }
    }
}

int check(int n){
    if(n>0){
        return 1;
    }
    else 
     return 0;
}