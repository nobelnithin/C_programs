#include <stdio.h>

main(){
    int x=3672;
    int y=2496;
    int ans;
    ans=func(x,y);
    printf("%d",ans);    
}

func(x,y){
    if(x>y){
        if (x%y==0){
            return y;
        }
        else{
            func(y,x%y);
        }
    }
    else{
            if (y%x==0){
                return x;
            }
            else{
                func(x,y%x);
            }
    }
}