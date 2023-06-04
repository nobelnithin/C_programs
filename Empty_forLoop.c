#include <stdio.h>

main(){

    double ncount;
    for (ncount=0;getchar()!=EOF;++ncount)
         ;//Even if the body of 'for' loop is empty we should use the isolate semicolon to it 
         printf("%.0f\n", ncount);
}