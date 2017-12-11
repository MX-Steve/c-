/*
 * 返回值练习
 * */
#include <stdio.h>
int add(void) {
    int num = 0, num1 = 0;
    printf("请输入两个数字：");
    scanf("%d%d", &num, &num1);
    return num + num1;
}
int main() {
    int num = add();
    printf("num是%d\n", num);
    return 0;
}




