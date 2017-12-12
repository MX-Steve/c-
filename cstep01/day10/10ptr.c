/*
 * 指针练习
 * */
#include <stdio.h>
int *max(const int *p_num, int size) {
    const int *p_tmp = NULL, *p_max = NULL;
    for (p_tmp = p_num;p_tmp <= p_num + size - 1;p_tmp++) {
        if (!p_max || *p_max < *p_tmp) {
            p_max = p_tmp;
        }
    }
    return (int *)p_max;
}
int main() {
    int arr[] = {40, 20, 80, 60, 50, 30};
    int *p_max = max(arr, 6);
    printf("最大数字是%d\n", *p_max);
    return 0;
}






