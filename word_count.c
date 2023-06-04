#include <stdio.h>

  #define IN 1
  #define OUT 0

main(){
   int nl,nw,c,nc,state;

   state=OUT;
   nl=nw=c=nc=0;
   while((c=getchar())!=EOF){      
     ++nc;
     if(c=='\n')
        ++nc;
     if (c==' '||c=='\n'||c=='\t')
        state=OUT;
     else if (state==OUT){
        state=IN;
        ++nw;
     }

     }
     printf("%d %d %d",nl,nw,nc);
  
}
