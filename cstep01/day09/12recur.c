/*
 * 费式数列练习
 * */
#include <stdio.h>
//int arr[50];
int fei(int num, int arr[], int size) {
    //static int arr[50] = {0};
    if (num <= 1) {
        return 1;
    }
    if (!arr[num - 2]) {
        arr[num - 2] = fei(num - 2, arr, size);
    }
    if (!arr[num - 1]) {
        arr[num - 1] = fei(num - 1, arr, size);
    }
    return arr[num - 2] + arr[num - 1];
}
int main() {
    int arr[50] = {0};
    int num = 0;
    printf("请输入一个编号：");
    scanf("%d", &num);
    printf("结果是%d\n", fei(num, arr, 50));
    return 0;
}



