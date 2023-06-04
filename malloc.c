#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,*b;//pointer variable if it is in declaration // store in stack section
    a=(int*)malloc(sizeof(int));//sizeof(int)==4 .:since size of int is 4 // store in the heep section
    b=(int*)malloc(sizeof(int));
    scanf("%d",a);
    scanf("%d",b);
    printf("%d\n",a);
    printf("%d",b);
}