/**
 * 数组形式参数
 */
#include <stdio.h>
void print(int arr[5],int n){
    int num = 0;
    for(num = 0;num<n;num++){
        printf("%d",arr[num]);
    }
    printf("\n");
}
void neg(int arr[],int size){
    int  num=0;
    for(num=0;num<size;num++){
        arr[num]=0-arr[num];
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    print(arr,5);

    neg(arr,5);
    print(arr,5);
    return 0;
}
