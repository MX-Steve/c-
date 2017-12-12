/*
 * 指针演示
 * */
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}, num = 0;
    int *p_num = arr;
    for (num = 0;num <= 4;num++) {
        printf("%d ", arr[num]);
        printf("%d ", *(arr + num));
        printf("%d ", p_num[num]);
        printf("%d ", *(p_num + num));
    }
    printf("\n");
    printf("arr是%p\n", arr);
    printf("arr + 1是%p\n", arr + 1);
    printf("&arr[1]是%p\n", &arr[1]);
    printf("arr - 1是%p\n", arr - 1);
    printf("&arr[3] - arr是%d\n", &arr[3] - arr);
    return 0;
}




