/*
 * 二维数组演示
 * */
#include <stdio.h>
int main() { 
    int arr[][2] = {{1, 2}, {3}, {5}};   //二维数组声明
    int row = 0, col = 0, tmp = 1;
    //arr[1][0] = 10;
    /*for (row = 0;row <= 2;row++) {
        for (col = 0;col <= 1;col++) {
            arr[row][col] = tmp;
            tmp++;
        }
    }*/
    for (row = 0;row <= 2;row++) {
        for (col = 0;col <= 1;col++) {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}







