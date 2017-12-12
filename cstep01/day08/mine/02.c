/**
 * 多函数程序演示
 */
#include <stdio.h>
void func(void){
    int num = 0;
    printf("num是%d\n",num);
}
int main(){
    int num = 10;
    printf("num是%d\n",num);
    func();
    return 0;
}
