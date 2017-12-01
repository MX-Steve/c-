/*
 * 变长数组演示
 * */
#include <stdio.h>
int main() {
    int size = 0;
    printf("请输入存储区个数：");
    scanf("%d", &size);
    int arr[size];   //变长数组
    printf("sizeof(arr)是%d\n", sizeof(arr));
    return 0;
}






