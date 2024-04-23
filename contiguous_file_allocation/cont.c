#include<stdio.h>
void main(){
    int n, start = 0;
    printf("Enter the number of files that you want to store: ");
    scanf("%d", &n);
    int block[n];
    for(int i = 1; i <= n; i++){
        printf("Enter the size of file %d: ", i);
        scanf("%d", &block[i]);
    }
    printf("File number\tStart\tSize\n");
    for(int j = 1; j <= n; j++){
        printf("File %d\t\t%d\t%d\n", j, start, block[j]);
        start += block[j];
    }
}
