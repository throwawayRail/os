#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main(){ 
    fork(); 
    printf("HELLO!\n PID=%d\n",getpid()); 
    return 0; 
}
