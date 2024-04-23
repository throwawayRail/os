#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
int i,j;
void *thread_function(void *arg);
int main(){
    char *m = "5";
    void *result;
    pthread_t a_thread;
    pthread_create(&a_thread, NULL, thread_function, m);
    pthread_join(a_thread, &result);
    printf("Thread has joined\n");
    printf("Control has returned to the main function");
    for(i = 20; i < 25; i++){
        printf("%d\n", i);
        sleep(1);
    }
    printf("The thread returned a message: %s\n", (char *)result);
}

void *thread_function(void *arg){
    printf("Control entered inside thread");
    int n = atoi(arg);
    for(int j = 0; j < n; j++){
        printf("%d\n", j);
        sleep(1);
    } pthread_exit("Thread execution complete!");
}
