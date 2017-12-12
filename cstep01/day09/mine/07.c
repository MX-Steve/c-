/**
 * 作用域
 */
#include <stdio.h>
int val;
void func(void){
    int num = 10;
    printf("num是%d\n",num);
    printf("val是%d\n",val);
}

int main(){
    int val = 100;
    printf("val是%d\n",val);
    func();
    return 0;
}
