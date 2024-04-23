#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(){
    int old_fd, new_fd;
    old_fd = open("test.txt", O_RDWR);
    printf("File descriptor for test.txt: %d\n", old_fd);
    new_fd = dup(old_fd);
    printf("New file descriptor for test.txt: %d\n", new_fd);
    return 0;
}

