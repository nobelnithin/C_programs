#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(void)
{   
    while(1)
    {       
        time_t t;
        time(&t);
        printf("Nithin ::::----::::%s\n",ctime(&t));
        sleep(1);
    
    }
    return 0;
}
