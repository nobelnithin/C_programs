#include <stdio.h>

main(){
    char s[100];
    printf("Enter the Sentence: ");
    scanf("%[^\n]%*c", &s);
    printf("%s",s);

/* In order to take a line as input,
 you can use scanf("%[^\n]%*c", s); 
 where  is defined as char s[MAX_LEN] where  is the maximum size of .
  Here, [] is the scanset character. 
  ^\n stands for taking input until a newline isn't encountered.
   Then, with this %*c, it reads the newline character and here, 
   the used * indicates that this newline character is discarded
   */

}