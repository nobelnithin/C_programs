#include <stdio.h>

main(void){
    int n,i;
    int opr;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int array1[n],array2[n],array[n];
    printf("---Enter the elements of first Array.---\n");
    i=1;
    while(i<=n){
        printf("Enter element %d: ", i);
        scanf("%d",&array1[i]);
        i++;  
    }
    printf("---Enter the elements of second Array.---\n");
    i=1;    
    while(i<=n){
        printf("Enter element %d: ", i);
        scanf("%d",&array2[i]);
        i++;
    }
    printf("Enter your operator: 1(ADD) and 2(SUBRACTION)");
    scanf("%d",&opr);    
    switch(opr){

        case 1:
           i=1;
           while(i<=n){
               array[i]=array1[i]+array2[i];
               printf("%d\t",array[i]);
               i++;
           }
           break;
        case 2:
            i=1;
            while(i<=n){
                array[i]=array1[i]-array2[i];
                printf("%d\t",array[i]);
                i++;
            }
            break;
    }
}
