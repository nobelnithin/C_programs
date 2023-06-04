#include <stdio.h>

void main(){
    float previous_weight=0.0,present_weight,value=5.0,copy_present;
    while(previous_weight>=0){
    printf("Enter: ");
    scanf("%f",&present_weight);
    copy_present=present_weight;
    present_weight=present_weight-previous_weight;
    previous_weight+=copy_present;
    printf("Total weight in BoX: %.2f",previous_weight);
    printf("\nYour plastic weight is:%.2f",present_weight);
    printf("\n Your credit:rupees %.2f\n",present_weight*value);
    }

}