/**
 * 地址相关操作符演示
 */
#include <stdio.h>
int main(){
    int num = 0;
    printf("&num 是 %p\n",&num);
    *(&num)=10;
    printf("num 是 %d\n",num);
    return 0;
}
