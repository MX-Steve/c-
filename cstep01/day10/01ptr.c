/*
 * 指针演示
 * */
#include <stdio.h>
int main() {
    int num;
    int *p_num = &num, *p_num1 = NULL;    //指针变量声明语句
    p_num = &num;
    *p_num = 10;
    printf("num是%d\n", num);
    return 0;
}







