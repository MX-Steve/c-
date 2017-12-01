/*
 * 变长数组练习
 * */
#include <stdio.h>
int main() {
    int size = 0, num = 0, min = 101, max = -1, sum = 0;
    printf("请输入考试成绩的个数：");
    scanf("%d", &size);
    int arr[size];
    for (num = 0;num <= size - 1;num++) {
        printf("请输入一个考试成绩：");
        scanf("%d", &arr[num]);
    }
    for (num = 0;num <= size - 1;num++) {
        if (min > arr[num]) {
            min = arr[num];
        }
        if (max < arr[num]) {
            max = arr[num];
        }
        sum += arr[num];
    }
    printf("最小考试成绩是%d\n", min);
    printf("最大考试成绩是%d\n", max);
    printf("总成绩是%d\n", sum);
    return 0;
}






