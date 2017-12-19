/*
 * 宏演示
 * */
#include <stdio.h>
#define   SQUARE(x)         ((x) * (x))
int main() {
    int num = 5;
    printf("SQUARE(5)是%d\n", SQUARE(5));
    printf("SQUARE(++num)是%d\n", SQUARE(++num));
    return 0;
}





