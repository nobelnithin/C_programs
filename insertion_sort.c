#include <stdio.h>
void sort(int a[],int n);

int main()
{
    int n,i,array[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the element %d: ",i+1);
        scanf("%d",array[i]);
    }

    printf("\nUnsorted aray\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    sort(int array[10],int n);
    printf("Sorted Array");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}

void sort (int a[10],int n)
{
    int temp,pass,i,j;
    for(pass=1;pass <=n-1;pass++){
        for( i=0;i<pass;i++){
            if(a[pass]<a[i]){
                temp=a[pass];
                for(j=pass-1;j>=1;j--){
                    a[j+1]=a[j];
                }
                a[i]=temp;
            }
        }
    }
}