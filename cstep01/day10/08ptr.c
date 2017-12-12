/*
 * 指针演示
 * */
#include <stdio.h>
void swap(int *p_num, int *p_num1) {
    int tmp = 0;
    tmp = *p_num;
    *p_num = *p_num1;
    *p_num1 = tmp;
}
int main() {
    int num = 3, num1 = 7;
    swap(&num, &num1);
    printf("%d %d\n", num, num1);
    return 0;
}
