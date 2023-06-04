#include <stdio.h>

main(){
    char c;
    c=getchar();
    while(c!=EOF){  /* here EOF is End of File*/
            putchar(c);
            //printf("\n");
            c=getchar();
            
    }
}