#include <stdio.h>

main(){


float fahr;
float celsius;
int low,upper,step;

low=0;
upper=300;
step=20;
fahr;

fahr=low;
printf("Fahrenheit\t celsius\n");

while (fahr<=upper){
    celsius=(5.0/9.0*(fahr-32));
    printf("%1.0f ---> | %10.2f \n", fahr,celsius);
    fahr=fahr+step;
}

}







