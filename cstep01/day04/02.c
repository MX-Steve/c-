/**
 *操作符演示
 */
#include <stdio.h>
int num2;
int main(){
    char ch = 0;
    int num  =0;
    num = ch =300;
    num+=4;
    printf("num是%d\n",num);
    num *=2+5;
    printf("num是%d\n",num);
    num = 10;
    num++;
    printf("num是%d\n",num);
    ++num;
    printf("num是%d\n",num);
    num++;
    num2=num++;
    printf("num是%d\n",num);
    printf("num是%d\n",num2);
    return 0;
}
