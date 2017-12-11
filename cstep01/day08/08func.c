/*
 * 函数练习
 * */
#include <stdio.h>
int rabbit(int heads, int legs) {
    int num = 0;
    for (num = 0;num <= heads;num++) {
        if (4 * num + 2 * (heads - num) == legs) {
            return num;
        }
    }
}
int main() {
    int heads = 0, legs = 0, tmp = 0;
    printf("请输入头和脚的数量：");
    scanf("%d%d", &heads, &legs);
    tmp = rabbit(heads, legs);
    printf("兔子有%d只，鸡有%d只\n", tmp, heads - tmp);
    return 0;
}



