#include <stdio.h>
#include <string.h>
#include <ctype.h>
char stack[100];
int top=0;
char stack[100];
int top=0;
char exp[100];
struct table{
    char s[2];
    int isp,icp;
}
pr[7];
int isp(char c){
    int i;
    for (i=0;i<=6;i++){
        if(pr[i].s[0]==c)
          return (pr[i].isp)
          return 0;
    }
    int icp(char c){
        int i;
        for(i=0;i<=6;i++){
            if(pr[i].s[0]==c)
              return (pr[i].isp);
              return 0;
        }
        int icp(char c){
            int i;
            for(i=0;i<=6;i++){
                if(pr[i].d[0]==c)
                  return (pr[i].icp);
                return 0
            }
        }

    }
}