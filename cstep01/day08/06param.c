/*
 * 参数演示
 * */
#include <stdio.h>
void print(int num, int num1) {
    printf("求和结果是%d\n", num + num1);
}
int main() {
    print(3, 8);
    print(5 + 7, 10 - 2);
    return 0;
}





