/*
 * 递归函数演示
 * */
#include <stdio.h>
void print(int max) {
    if (max == 1) {
        printf("1 ");
        return ;
    }
    print(max - 1);
    printf("%d ", max);
}
int main() {
    print(10);
    printf("\n");
    return 0;
}







