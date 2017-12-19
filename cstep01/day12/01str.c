/*
 * 字符串演示
 * */
#include <stdio.h>
int main() {
    char *str[] = {"abc", "def", "xyz",
            "iop", "asd"};
    int num = 0;
    for (num = 0;num <= 4;num++) {
        printf("%s\n", str[num]);
    }
    return 0;
}





