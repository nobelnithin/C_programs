#include <stdio.h>
int  binary_search(int x[],int low,int high,int ele);

void main()
{
    int array[10],n,i,ser;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element %i: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the element to be search:");
    scanf("%d",&ser);
    binary_search(array,1,n,ser);
}

void binary_search(int x[],int low,int high,int ele){
      int mid;
      mid=(low+high)/2;
      printf("\nmid:%d\n",mid);
      if(ele==x[mid]){
          printf("\nElement Found\n");
          printf("POSITION: %d",mid);

      }
      else if(ele<x[mid]){
          binary_search(x,1,mid-1,ele);}
      else if(ele>x[mid]){
          binary_search(x,mid+1,high,ele);
      }
      
      else{
          printf("\nElement not found\n ");
      }
}