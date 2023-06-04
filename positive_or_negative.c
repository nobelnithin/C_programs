#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(){
    int x;
    do{
    printf("\nEnter your number: ");
    scanf("%d",&x);
    
    if(x==0){
        printf("\nYour numer is Zero.");
    }
    else if(x%2==0){
        printf("\nYour number is Even.");;
    } 
    else if(x%2!=0){
        printf("\nYour number is Odd.");
    }
    else{
        break;
    }}
    while(1);


}