#include<stdio.h>
int  check(int);
int check(int n)
{
    if(n>0)
       return 1;
    else 
       return 0;
}
int main()
{
  int n;
  scanf("%d",&n);
  if(check(n)){
    printf("positive");
  }
  else 
     printf("Negative");

}