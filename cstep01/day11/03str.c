/*
 * 字符串演示
 * */
#include <stdio.h>
#include <string.h>
int main() {
    char str[10] = "abc";
    printf("有效字符个数是%d\n", strlen(str));
    printf("sizeof(str)是%d\n", sizeof(str));
    printf("%s\n", strcat(str, "xyz"));
    printf("%s\n", str);
    printf("%s\n", strncat(str, "iopewtr", 3));
    printf("%s\n", str);
    printf("比较结果是%d\n", strcmp("abc", "abd"));
    printf("比较结果是%d\n", strncmp("abc", "abd", 2));
    printf("%s\n", strcpy(str, "asd"));
    printf("%s\n", str);
    printf("%s\n", strncpy(str, "xyz", 2));
    printf("%s\n", str);
    memset(str, 'h', 9);
    printf("str是%s\n", str);
    printf("%s\n", strstr("abcdefghijklmn", "def"));
    return 0;
}










