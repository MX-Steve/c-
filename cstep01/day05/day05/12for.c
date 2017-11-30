/*
 * 循环练习
 * */
#include <stdio.h>
int main() {
    int min = 0, num = 0;
    printf("请输入一个数字：");
    scanf("%d", &min);
    for (num = min;num <= 100;num++) {
        if (num % 10 == 7) {
            continue;
        }
        if (num / 10 == 7) {
            continue;
        }
        if (!(num % 7)) {
            continue;
        }
        printf("%d ", num);
    }
    printf("\n");
    return 0;
}





