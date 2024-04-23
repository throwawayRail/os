#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void main(){
	int p;
	printf("\nBefore fork");
    printf("\nOnly in the parent process");
	p = fork();
	if(p == 0){
		printf("\nI am a child process, my process id: %d", getpid());
		printf("\nmy parent process' id: %d", getppid());
	}
	else if(p > 0){
		printf("\nI am a parent process, my process id: %d", getpid());
		printf("\nmy child process has id: %d", p);
	}
	printf("\nEnd of process execution");
}
