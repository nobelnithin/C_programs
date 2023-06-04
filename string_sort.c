#include <stdio.h>
main(void){
    int n,i,j;
    printf("Enter number of strings: ");
    scanf("%d",&n);
    char array[n][15];
    char temp[n][15];
    for(i=0;i<n;i++){
        printf("Enter your string %d: ",i+1);
        scanf("%s",&array[i][15]);
    }
    i=0;
    printf("Befor: ");
    while(i<n){
        printf("%s\n",array[i+1]);
        i++;
    }
       for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (array[i][i] > temp[j][j]) {
            temp [n][i]= array[n][i];
            array[n][i] = array[n][j];
            array[n][j] = temp[n][i];
         }
      }
   }

printf("After sorting:\n");
i=0;
    while(i<n){
        printf("%s\n",temp[i]);
        i++;
    }

}