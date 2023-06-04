#include <stdio.h>

main(void){
    int n,i;
    char opr;
    printf("Enter the size of Array one: ");
    scanf("%d",&n);
    int array1[n],array2[n],array[n];
    printf("---Enter the elements of first Array.---\n");
    
    for(i=1;i<=n;i++){
        printf("Enter element  %d\t", i);
        scanf("%d",&array1[i]);
        
    }
    printf("---Enter the elements of second Array.---");
    
    for(i=1;i<=n;i++){
        printf("Enter element  %d\t", i);
        scanf("%d",&array2[i]);
        
    }
    printf("Enter your operator: ");
    scanf("%d",&opr);
    
    switch(opr){
        case 1:
           for(i=1;i<=n;i++){
               array[i]=array1[i]+array[i];
               printf("%d\t",&array[i]);
               
           }
        case 2:
            for(i=0;i<=n;i++){
                array[i]=array1[i]-array2[i];
                printf("%d",&array[i]);
                
            }
    }
}