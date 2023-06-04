#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool is_vowel(chra ch);

int main(){
    char name[10]="nithin";
    int i;
    int x,ind=0;
    int len=strlen(name);
    for(i=0;i<len;i++)
    {
        if(is_vowel(name[i]))
        {
           x=((i+1)-(ind));
           ind=(i+1);
           printf("%c",name[i]);
        }
    }
    return 0;
}

bool is_vowel(char ch)
{
    if(tolower(ch)=='a'||tolower(ch)=='e'||tolower(ch)=='i'||tolower(ch)=='o'||tolower(ch)=='u')
    {
        return 1;
    }
    return 0;
}