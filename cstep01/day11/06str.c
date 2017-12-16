/*
 * 字符串练习
 * */
#include <stdio.h>
#include <string.h>
int main() {
    int cnt = 0, num = 0, grade = 0;
    char str[50] = {0}, tmp[10] = {0};
    printf("请输入考试成绩个数：");
    scanf("%d", &cnt);
    for (num = 0;num <= cnt - 1;num++) {
        printf("请输入一个考试成绩：");
        scanf("%d", &grade);
        sprintf(tmp, "%d,", grade);
        strcat(str, tmp);
    }
    str[strlen(str) - 1] = 0;
    printf("结果是%s\n", str);
    return 0;
}






