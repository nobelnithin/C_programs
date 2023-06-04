#include <stdio.h>
void sort(int a[],int);
void main(){
    int array[10],i,n;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Unsorted Array\n");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    sort(array,n);
    printf("\nSorted Array\n");
    for(i=0;i<n;i++){
        printf("%d\t ",array[i]);
    }
}
void sort(int a[10],int n){
    int temp,pass,i,j;
    for(pass=1;pass<n;pass++){
        for(i=0;i<pass;i++){
            if(a[pass]<a[i]){
                temp=a[pass];
                for( j=pass-1;j>=1;j--)
                      a[j+1]=a[j];
                a[i]=temp;
            }
        }
    }
}