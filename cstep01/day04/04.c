/**
*  位操作符演示
 * */
#include <stdio.h>
int main(){
    char ch =  ~0x97;
    int num = ch;
    printf("num是0x%x\n",num);
    printf("3 & 7是%d\n",3 & 7);
    printf("3 | 5是%d\n",3 | 5);
    printf("3 ^ 5是%d\n",3 ^ 5);
    printf("3<<2是%d\n",3 << 2);
    num = 0x40000000;
    printf("num >> 2是0x%x\n",num>>2);
    num = 0x80000000;
    printf("num >> 2是0x%x\n",num >> 2);
    printf("num 是 0x%x\n",num);
    return 0;
}
