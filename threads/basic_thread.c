#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
void *thread_function(void *arg);
int i, j; 
int main(){
    pthread_t a_thread;
    pthread_create(&a_thread, NULL, thread_function, NULL);
    pthread_join(a_thread, NULL);
    printf("Joined to the main thread\n");
    printf("Counting in the main program.\n");
    for(i = 20; i < 25; i++){
        printf("%d\n", i);
        sleep(1);
    }
}

void *thread_function(void *arg){
    printf("Counting in the thread\n");
    for(j = 0; j < 5; j++){
        printf("%d\n", j);
        sleep(1); }
}
