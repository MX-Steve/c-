/**
 * 函数演示
 */
#include <stdio.h>

int plus(void){
    int num1 = 0,num2=0;
    printf("输入两个数字：");
    scanf("%d%d",&num1,&num2);
    return num1 + num2;
}
int main(){
    int num =  plus();
    printf("num是%d\n",num);
    return 0;
}
