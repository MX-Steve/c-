/**
 * switch..case...练习
 */
#include <stdio.h>
int main(){
    int num = 0;
    printf("输入一个季节：（0：春，1：夏，2：秋，3：冬）");
    scanf("%d",&num);
    switch(num){
        case 0:
            printf("春天到了\n");
            break;
        case 1:
            printf("夏天到了\n");
            break;
        case 2:
            printf("秋天到了\n");
            break;
        case 3:
            printf("冬天到了\n");
            break;
        default:
            printf("不认识这个数");
    }
    return 0;
}
