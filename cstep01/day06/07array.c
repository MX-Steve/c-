/**
 * 数组
 */
#include <stdio.h>

int main(){
    int arr[5];   //数组声明语句
    arr[2]=10;
    arr[0]=2;
    arr[1]=4;
    arr[3]=15;
    arr[4]=29;
    int num = 0;
    for(num = 0;num<=4;num++){
        printf("数组的下标为%d,直为%d\n",num,arr[num]);
    }
    int stu[5]={11,22,33,44,55};
    for(num=0;num<=4;num++){
        printf("直为：%d\n",stu[num]);
    }
    return 0;
}

