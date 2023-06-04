#include <stdio.h>

int main()
{
    int n;
    Boolean flag;
    while(1)
    {
        printf("Enter the number: ");
        scanf("%d\n",&n);
        if(n>=300)
        {
            flag=!flag;
        }
    }
}