/*
 * 字符串演示
 * */
#include <stdio.h>
int main() {
    char str[] = "xyz";
    printf("%p\n", "abc");
    printf("%p\n", "abc");
    printf("%p\n", "ab""c");
    printf("%c\n", *"abc");
    printf("%d\n", *("abc" + 3));
    //*"abc" = 'x';      错误
    printf("sizeof(str)是%d\n", sizeof(str));
    printf("%s\n", "abcxyz");
    return 0;
}






