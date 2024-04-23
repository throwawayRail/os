#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *thread_function(void *arg);
int i, j;    
int main(){
    int nums[2] = {2, 3};
    void *result;
    pthread_t a_thread;
    pthread_create(&a_thread, NULL, thread_function,(void *)nums);
    pthread_join(a_thread, &result);
    printf("The main program has been completed: %s\n", (char *)result);
}

void *thread_function(void *arg){
    printf("Control has entered thread\n");
    int *x = arg;
    printf("The sum of the elements in the array: %d\n", x[0] + x[1]);
    pthread_exit("The thread execution has been completed\n");
}
