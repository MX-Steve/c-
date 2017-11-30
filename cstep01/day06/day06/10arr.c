/*
 * 数组练习
 * */
#include <stdio.h>
int main() {
    int arr[5] = {0}, val = 0, num = 0;
    printf("请输入一个数字：");
    scanf("%d", &val);
    for (num = 4;num >= 0;num--) {
        arr[num] = val % 10;
        val /= 10;
        if (!val) {
            break;
        }
    }
    for (;num <= 4;num++) {
        printf("%d ", arr[num]);
    }
    printf("\n");
    return 0;
}








