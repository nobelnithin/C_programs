#include <stdio.h>

void main(){
    int num1[2][2],num2[2][2],i,j;
    printf("Enter the Elements for array 1: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
           scanf("%d",&num1[i][j]);
    }
    printf("\nEnter the Elemnts of array 2: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
           scanf("%d",&num2[i][j]);
    }    

    printf("\nSum of the Array: ");
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<2;j++)
          printf("%d\t",num1[i][j]+num2[i][j]);
    }    
}