#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    int pid = fork();
    if(pid == 0)
        printf("Hello from the child process! my pid is %d\n", getpid());
    else
        printf("Hello from the parent process: my pid is %d\n", getpid());
    return 0;
}

