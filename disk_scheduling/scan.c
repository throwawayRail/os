#include<stdio.h>
#include<stdlib.h>
int main(){
    int rq[100], i, j, n, totalHeadMoment = 0, initial, size, move;
    printf("Enter the number of requests: ");
    scanf("%d", &n);
    printf("Enter the requests sequence: ");
    for(i = 0; i < n; i++)
        scanf("%d", &rq[i]);
    printf("Enter the initial postion: ");
    scanf("%d", &initial);
    printf("Enter the disk size: ");
    scanf("%d", &size);
    printf("Enter the movement direction, 1 for high, 0 for low: ");
    scanf("%d", &move);

    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1; j++){
            if(rq[j] > rq[j + 1]){
                int temp = rq[j + 1];
                rq[j + 1] = rq[j];
                rq[j] = temp;
            }
        }
    }
    int index;
    for(i = 0; i < n; i++){
        if(initial < rq[i]){
            index = i;
            break;
        }
    }
    if(move == 1){
        for(i = index; i < n; i++){
            totalHeadMoment += abs(rq[i] - initial);
            initial = rq[i];
        }
        totalHeadMoment += abs(size - rq[i - 1] - 1);
        initial = size - 1;
        for(i = index-1; i >= 0; i--){
            totalHeadMoment += abs(rq[i] - initial);
        }
    }

    else{
        for(i = index; i >= 0; i--){
            totalHeadMoment += abs(rq[i] - initial);
            initial = rq[i];
        }
        totalHeadMoment += abs(rq[i + 1] - 0);
        initial = 0;
        for(i = index; i < n; i++){
            totalHeadMoment += abs(rq[i] - initial);
            initial = rq[i];
        }
    }
    printf("Total Head Moment: %d", totalHeadMoment);
    return 0;

}
