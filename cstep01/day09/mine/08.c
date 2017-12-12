/**
 * 生命周期演示
 */
#include <stdio.h>
void fun(void){
    int num;
    printf("num是%d\n",num);
    num = 10;
}
void func(void){
    int val = 100;
    fun();
}
int main(){
    fun();
    func();
    return 0;
}
