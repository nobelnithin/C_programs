#include <stdio.h>
#include <ctype.h>

int  main()
{
    char name[1000];
    scanf("%s",&name);
    int index=0;
    int loop;
    while(name[index]!='\0')
    {
        if(tolower(name[index])=='a'||tolower(name[index])=='e'||tolower(name[index])=='i'||tolower(name[index])=='o'||tolower(name[index])=='u')
        {
            for(loop=0;loop<index+1;loop++)
            {
                printf("%c",name[index]);
            }
            printf(" ");
        }  
        index++;  
    }
    return 0;
}