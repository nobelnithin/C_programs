#include <stdio.h>

main(){
    long ch, nline;
    nline=0;
    while ((ch=getchar())!=EOF){
        if(ch=='\n'){           
             nline++;
        printf("%d",nline);
        }
    }
    }
    
