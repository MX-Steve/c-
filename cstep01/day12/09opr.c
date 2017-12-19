/*
 * 宏操作符演示
 * */
#include <stdio.h>
#define    STR(n)        #n
#define    PTR(n)        p_##n
int main() {
    int num = 0;
    int *PTR(num) = &num;
    STR(2 + 3);
    return 0;
}






