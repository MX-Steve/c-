/**
 * 参数演示
 */
#include <stdio.h>
void add(int num1, int num2){
   printf("求和的结果是：%d\n", num1 + num2);
}


int main(){
    add(5,28);
    add(10+5,20-5);
    return 0;
}
