/**
 * 函数演示
 */
#include <stdio.h>

void func(void){
    int num;
    printf("num是%d\n",num);
    num = 10;
}
void func1(void){
    int num = 10000;
    func();
}
int main(){
    func();
    func1();
    return 0;
}
