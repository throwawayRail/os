#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(){
    int n, fd, fd1;
    char buffer[50];
    fd = open("test.txt", O_RDONLY);
    n = read(fd, buffer, 22);
    fd1 = open("towrite.txt", O_WRONLY|O_CREAT, 0642);
    write(fd1, buffer, n);
}
