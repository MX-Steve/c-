/**
 * 判断最大值
 */
#include <stdio.h>
int main(){
    int num1 = 0,num2=0,num3=0;
    printf("请输入三个数字:");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1 < num2){
        if(num2<num3){
            printf("最大值为%d\n",num3);
        }else{
            printf("最大值为%d\n",num2);
        }
    }else{
        if(num1 < num3){
            printf("最大值为%d\n",num3);
        }else{
            printf("最大值为%d\n",num1);
        }
    }
    return 0;
}
