#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(void){
    char palin[10],s1[10],s2[10];
    int opr,i,j,len,len1,len2,sign;
    printf("Enter your operation:\n1.Palindrome\n2.Concatenation\n3.Comparision\n4.Exit\nEnter:");
    scanf("%d",&opr);
    switch(opr){
        case 1:
            printf("----PALINDROME----\n");
            printf("Enter your String: ");
            scanf("%s",&palin);
            len=strlen(palin);
            for(i=0;i<=(len-1)/2;i++){
                if(palin[i]!=palin[len-(i+1)]){
                    sign=0;
                    break;
                }
                else 
                   sign=1;
                }
                if(sign==1)
                         printf("%s is a Palindrome.",palin);
                else 
                         printf("%s is not a Palindrome",palin);
                break;
        case 2:
            printf("----CONCATENATION----\n");
            printf("Enter your first string: ");
            scanf("%s",&s1);
            printf("Enter your second string: ");
            scanf("%s",&s2);
            printf("%s%s",s1,s2);
            break;
        case 3:
            printf("\n----String Comparison----");
            printf("\nEnter your first string: ");
            scanf("%s",&s1);
            printf("\nEnter your second string: ");
            scanf("%s",&s2);
            len1=strlen(s1);
            len2=strlen(s2);
            if(len1!=len2){
                printf("Strings are not same.");
                break;
            }
            for(i=0;i<len1;i++){
                if(s1[i]!=s2[i]){
                    printf("Strings are not same.");
                    break;
                }
                   // break;
            }
            printf("Strings are same.");
            break;
        case 4:
            exit(0);              
    }
}