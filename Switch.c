#include <stdio.h>

main(void){
      int x;
      printf("Enter any number between 1 to 4: ");
      scanf("%d",&x);

      switch(x){
            case 1:
               printf("ONE\n");
               break;
            case 2:
               printf("TWO\n");
               break;
            case 3:
               printf("THREE\n");
               break;
            case 4:
               printf("FOUR\n");
               break;
            default:
               printf("WORNG\n");
               break;
      }
}