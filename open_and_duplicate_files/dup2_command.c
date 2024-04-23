#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
    int old_fd, new_fd;
    old_fd = open("test.txt", O_RDONLY);
    printf("File descriptor for test.txt: %d\n", old_fd);
    new_fd = dup2(old_fd, 8);
    printf("New custom file descriptor for test.txt: %d\n", new_fd);
    return 0;
}
