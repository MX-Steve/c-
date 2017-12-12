/**
 * 彩票
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void getLorry(int arr[],int size){
    int num = 0;
    for(num=0;num<size;num++){
        arr[num] = rand()%36 +1;
    }
    
}
int main(){
    int arr[7]={0},num=0;
    srand(time(0));
    getLorry(arr,7);
    for(num=0;num<7;num++){
        printf("%d ",arr[num]);
    }
    printf("\n");
    return 0;
}
