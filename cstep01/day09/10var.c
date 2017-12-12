/*
 * 作用域演示
 * */
#include <stdio.h>
int val;    //全局变量
void func(void) {
    int num = 10;
    printf("num是%d\n", num);
    printf("val是%d\n", val);
}
int main() {
    int val = 1000;
    printf("val是%d\n", val);
    //printf("num是%d\n", num);    错误
    func();
    return 0;
}





