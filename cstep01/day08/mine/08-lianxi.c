/**
 * 鸡兔同笼
 */
#include <stdio.h>

int tu(int head,int foot){
    int num=0;
    for(num = 0;num<=head;num++){
        if(4*num +2*(head-num) == foot){
            return num;
        }
    }
}

int main(){
    int num = tu(20,60);
    printf("兔子的只数是：%d\n",num);
    return 0;
}
