#include <stdio.h>
#include <stdlib.h>

main(void){
    int r1,r2,c1,c2,i,j,k;
    printf("Enter row and column of matrix 1: ");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter row and column of matrix 2: ");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2){
        printf("Matrix Multiplication is not possible :(");
        exit(0);
    }
    int array[r1][c2],array1[r1][c1],array2[r2][c2];
    printf("Enter the elements of your 1st Matrix.\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter:");
            scanf("%d",&array1[i][j]);
        }
    }
    printf("\nEnter the elements of your 2nd Matrix.\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Enter:");
            scanf("%d",&array2[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            array[i][j]=0;
            for(k=0;k<r2;k++){
                array[i][j]+=array1[i][k]*array2[k][j];
            }
        }
    }
    printf("Your First Matrix.\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
             printf("%d\t",array1[i][j]);
        }
        printf("\n");
    }
    printf("Your second Matrix.\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",array2[i][j]);
        }
        printf("\n");
    }
    printf("Your Resultant Matrix.
    ");
    printf("\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
   }