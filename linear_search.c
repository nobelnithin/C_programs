#include <stdio.h>

void main(){
    int array[10],n,i,ser;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nEnter the element %d: ",i);
        scanf("%d",&array[i-1]);
    }
    printf("\nEnter the item to be search: ");
    scanf("%d",&ser);
    for(i=0;i<n;i++){
        printf("%d\n",i);
        if(ser==array[i]){
            
            printf("\nItem %d found at location %d",array[i],i+1);
            break;
        }
        if(i==n)
          printf("\nItem does not exit");

    }

}