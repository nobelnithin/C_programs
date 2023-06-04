#include <stdio.h>

main(){

    long character;

    character =0;
    while(getchar()!=EOF){
        ++character;
        printf("%d",character);
    }
}