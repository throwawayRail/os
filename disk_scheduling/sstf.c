#include<stdio.h>
#include<stdlib.h>
int main(){
    int rq[100], i, n, totalHeadMoment = 0, initial, count = 0;
    printf("Enter the number of requests: ");
    scanf("%d", &n);
    printf("Enter the Requests sequence\n");
    for(i = 0; i < n; i++)
        scanf("%d", &rq[i]);
    printf("Initial head: ");
    scanf("%d", &initial);

    while(count != n){
        int min = 1000, d, index;
        for(i = 0; i < n; i++){
            d = abs(rq[i] - initial);
            if(min > d){
                min = d;
                index = i;
            }
        }
        totalHeadMoment += min;
        initial = rq[index];
        rq[index] = 1000;
        count++;
    }
    printf("Total Head movement: %d", totalHeadMoment);
    return 0;
}
