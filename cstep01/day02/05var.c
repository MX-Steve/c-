/**
 * 变量演变
 */

#include <stdio.h>
int main(){
    int num = 0 , num1=0,num2=0,num3=0; //变量声明==》为程序分配存储区，声明同时可以把变量初始化<F12>
    num1 = 20;
    num2 = 34+90;
    num3 = 40;//赋值语句
    num = num + 5;
    printf("num是%d\n",num);
    printf("&num是%p\n",&num);
    return 0;
}
