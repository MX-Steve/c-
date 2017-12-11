/*
 * 扫雷练习
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int map[10][10] = {0};
    int delta[][2] = {-1, -1, -1, 0, -1, 1,
              0, -1, 0, 1, 1, -1, 1, 0,
              1, 1};
    int row = 0, col = 0, num = 0, cnt = 0;
    srand(time(0));
    do {
        row = rand() % 10;
        col = rand() % 10;
        if (!map[row][col]) {
            map[row][col] = -1;
            cnt++;
        }
    } while (cnt < 10);
    //填充数字
    for (row = 0;row <= 9;row++) {
        for (col = 0;col <= 9;col++) {
            //排除不是空的格子
            if (map[row][col]) {
                continue;
            }
            for (num = 0;num <= 7;num++) {
                int tmp_row = row + delta[num][0];
                int tmp_col = col + delta[num][1];
                if (tmp_row < 0 || tmp_row > 9) {
                    continue;
                }
                if (tmp_col < 0 || tmp_col > 9) {
                    continue;
                }
                if (map[tmp_row][tmp_col] != -1) {
                    continue;
                }
                map[row][col]++;
            }
        }
    }
    for (row = 0;row <= 9;row++) {
        for (col = 0;col <= 9;col++) {
            if (!map[row][col]) {
                printf("O");
            }
            else if (map[row][col] == -1) {
                printf("X");
            }
            else {
                printf("%d", map[row][col]);
            }
        }
        printf("\n");
    }
    return 0;
}







