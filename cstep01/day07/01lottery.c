/*
 * 数组练习
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int arr[7] = {0}, arr1[7] = {0}, num = 0, num1 = 0, tmp = 0, cnt = 0;
    srand(time(0));
    /*for (num = 0;num <= 6;num++) {
        arr[num] = rand() % 36 + 1;
    }*/
    do {
        tmp = rand() % 36 + 1;
        //用新数字和以前得到的所有有效数字
        //依次做对比
        for (num = 0;num <= cnt - 1;num++) {
            if (arr[num] == tmp) {
                break;
            }
        }
        //如果循环正常结束就说明新数字
        //可以使用，否则新数字不能使用
        if (num == cnt) {
            //循环正常结束
            arr[cnt] = tmp;
            cnt++;
        }
    } while (cnt < 7);
    for (num = 0;num <= 6;num++) {
        printf("%d ", arr[num]);
    }
    printf("\n");
    //获得用户输入的彩票内容
    for (num = 0;num <= 6;num++) {
        printf("请输入一个数字：");
        scanf("%d", &arr1[num]);
    }
    //统计买对的数字个数
    cnt = 0;
    for (num = 0;num <= 6;num++) {
        for (num1 = 0;num1 <= 6;num1++) {
            if (arr[num] == arr1[num1]) {
                cnt++;
                break;
            }
        }
    }
    printf("买对的数字个数是%d\n", cnt);
    return 0;
}







