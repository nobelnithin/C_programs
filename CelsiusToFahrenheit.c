#include <stdio.h>

main(){
    float fahr, celsius;
    int step=20;
    int lower=0;
    int upper=200;

    celsius=lower;
    while (celsius<=upper){
        fahr=(9.0/5.0)*celsius-32.0;
        printf("%1.2f\t%5.2f\n",celsius,fahr);
        celsius=celsius+step;

    }
}