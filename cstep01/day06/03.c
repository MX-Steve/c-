/**
 * 猜数字
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int num = 0;
    int s = 0;
    s = rand()%100;
    printf("猜吧：%d\n",s);
    while(1){
        scanf("%d",&num);
        if(num > s){
            printf("猜大了\n");
        }else if(num < s){
            printf("猜小了\n");
        }else{
            printf("猜对了\n");
            break;
        }
    }
    return 0;
}
