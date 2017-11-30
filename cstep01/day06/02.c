/**
 * 随机数：时间做随机种子
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    return 0;
}
