#include <stdio.h>
#include <stdlib.h>

main(void){
    int r1,c1,r2,c2;
    printf("Enter the Row and Column of your first matrix.");
    printf("\nRow:");
    scanf("%d",r1);
    printf("\nColumn:");
    scanf("%d",c1);
    printf("Enter the Row and Column of your second matrix.");
    printf("\nRow:");
    scanf("%d",r2);
    printf("\nColumn:");
    scanf("%d",c2);
    if(r1!=c2){
        printf("Matrix multiplication is mot possible :(");
        exit(0);
    }
    int i,j,array1[r1][c1],array2[r2][c2],array[r1][c2];
    
    

}