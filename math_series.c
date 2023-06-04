#include <stdio.h>

main(void){
      int x,i,n;
      float ans,p,f;
      i=p=f=1;
      ans=0;

      printf("Enter your \'x\' value: ");
      scanf("%d",&x);
      printf("Enter your \'n\' value: ");
      scanf("%d",&n);
      
      while(i<=n){
            p=p*x;
            f=f*i;
            ans=ans+(p/f);
            i++;         
      }
      printf("Value of the Maths Series is %.2f",ans);
}

