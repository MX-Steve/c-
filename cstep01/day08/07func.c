/*
 * 函数练习
 * */
#include <stdio.h>
int add(int num, int num1) {
    return num + num1;
}
int main() {
    int num = 0, num1 = 0, sum = 0;
    printf("请输入两个数字：");
    scanf("%d%d", &num, &num1);
    sum = add(num, num1);
    printf("求和结果是%d\n", sum);
    return 0;
}






