/*
 * 费式数列练习
 * */
#include <stdio.h>
int fei(int num) {
    if (num <= 1) {
        return 1;
    }
    return fei(num - 2) + fei(num - 1);
}
int main() {
    int num = 0;
    printf("请输入一个编号：");
    scanf("%d", &num);
    printf("结果是%d\n", fei(num));
    return 0;
}



