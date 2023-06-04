#include <stdio.h>

int main(){
    int n;
    printf("arry size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        
        {
            if(arr[i]>arr[i++])
               printf("%d ",arr[i]);
            else
               printf("%d ",arr[i+1]);
        }
        
        else
            printf("%d",arr[i]);
            break;
    }
    return 0;
}