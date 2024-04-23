#include<stdio.h>
#include<stdlib.h>
void main(){
    int rq[29], i, n, initial;
    int totalHeadMoment = 0;
    printf("Enter no. of requests: ");
    scanf("%d", &n);
    printf("Enter the requests array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &rq[i]);
    printf("Enter the initial position: ");
    scanf("%d", &initial);

    for(i = 0; i < n; i++){
        totalHeadMoment += abs(rq[i] - initial);
        initial = rq[i];
    }
    printf("Total head moment is: %d", totalHeadMoment);
}
