#include "stdio.h"
#include "signal.h"

void signalHandler(int sig);

int main(){
    if (sig==SIGABRT){
        
    }
}

void signalHandler(int sig){
    typedef void (*SignalHandlerPointer)(int );

    SignalHandlerPointer previousHandler;
    previousHandler = signal(SIGABRT, SignalHandler);

    abort();
}