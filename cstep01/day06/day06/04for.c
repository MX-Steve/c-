/*
 * 多重循环练习
 * */
#include <stdio.h>
int main() {
    int num = 0, num1 = 0;
    for (num = 0;num <= 2;num++) {
        for (num1 = 0;num1 <= 5;num1++) {
            if (5 * num + 2 * num1 <= 10) {
                printf("1块钱有%d张，2块钱有%d张，5块钱有%d张\n", 10 - 5 * num - 2 * num1, num1, num);
            }
        }
    }
    return 0;
}



