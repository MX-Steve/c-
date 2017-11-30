/*
 * while循环练习
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int num = 0, guess = 0;
    srand(time(0));
    //num = rand() % 100 + 1;
    /*while (num != guess) {
        printf("请猜一个数字：");
        scanf("%d", &guess);
        if (num > guess) {
            printf("猜小了\n");
        }
        else if (num < guess) {
            printf("猜大了\n");
        }
        else {
            printf("猜对了\n");
        }
    }*/
    do {
        printf("请猜一个数字：");
        scanf("%d", &guess);
        if (num > guess) {
            printf("猜小了\n");
        }
        else if (num < guess) {
            printf("猜大了\n");
        }
        else {
            printf("猜对了\n");
        }
    } while (num != guess);
    return 0;
}




