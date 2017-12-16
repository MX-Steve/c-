/*
 * 指针练习
 * */
#include <stdio.h>
int *reverse(int *p_num, int size) {
    int *p_start = p_num, *p_end = p_num + size - 1;
    int tmp = 0;
    while (p_start < p_end) {
        //把p_start指针和p_end指针
        //所捆绑的存储区内容做交换
        tmp = *p_start;
        *p_start = *p_end;
        *p_end = tmp;
        p_start++; //把p_start指针向后移动一步
        p_end--;   //把p_end指针向前移动一步
    }
    return p_num;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5}, num = 0;
    int *p_num = reverse(arr, 5);
    for (num = 0;num <= 4;num++) {
        printf("%d ", *(p_num + num));
    }
    printf("\n");
    return 0;
}




