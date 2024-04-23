#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(){
    int bytes_to_be_written, fd;
    char buffer[21];
    fd = open("test.txt", O_RDONLY);
    printf("The file descriptor of test.txt is: %d\n", fd);
    bytes_to_be_written = read(fd, buffer,21);
    write(1, buffer, bytes_to_be_written);
    return 0;
}
