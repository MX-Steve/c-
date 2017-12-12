/**
 * 返回直演示
 */
#include <stdio.h>
/*void int func(void){
    volatile int num = 0;
    return num;
}
*/
int read(void){
    int num = 0;
    printf("请输入一个数字：");
    scanf("%d",&num);
    return num;
}
int main(){
    int num = read();
    printf("num是%d\n",num);
    return 0;
}
