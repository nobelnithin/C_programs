#include <stdio.h>
#include <string.h>

int num=5;
char *ads[]={
    "William: SBM GSOH likes sports, TV , dining ",
    "Matt: likes art, movies, theater",
    "Lusi: likes books, theater , art ",
    "Mike: likes trucks, sports and bieber ",
    "Peter: likes chess, work out and art",
    "Josh: likes sports, movies and theater",
    "Jed: likes theater, books, dining "
};

int main(){
    int i;
    puts("Search result:");
    puts("------------------------------------");
    for(i=0;i<num;i++){
        if(strstr(ads[i],"  ~theater") ||  strstr(ads[i],"dining ") || strstr(ads[i],"art`") ){
                printf("\nResult: %s",ads[i]);
                //puts("\n");
            }
    }
    puts("\n--------------------------------------");
    return 0;
}