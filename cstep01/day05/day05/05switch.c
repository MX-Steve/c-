/*
 * switch...case分支演示
 * */
#include <stdio.h>
int main() {
    int season = 0;
    printf("请输入一个数字：");
    scanf("%d", &season);
    switch (season) {
        case 0:
            printf("春\n");
            break;
        case 1:
            printf("夏\n");
            break;
        case 2:
            printf("秋\n");
            break;
        case 3:
            printf("冬\n");
            break;
        default:
            printf("不认识的数字\n");
            break;
    }
    return 0;
}





