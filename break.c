#include <stdio.h>

main(void){
    int i,j,n;
    n=3;
    for(i=0;
        i<=n;
        i++){
            for(j=0;j<=n;j++){
                printf("nihti\n");
                if(j==2){
                    break;
                }
            }
        }
}