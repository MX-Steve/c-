/*
 *字符演示
 *sizeof 关键字
 * */
#include <stdio.h>

int main(){
   // printf("abc\rde\n");
    float r = 5.2f,c = 0;
    int num =10,num2=0;
    c = 2*3.14f*r;
    printf("周长为：%g\n",c);
    printf("sizeof(num)是%d\n",sizeof(num));
    
    printf("sizeof('a')是%d\n",sizeof('a'));

    printf("sizeof(num2=10)是%d\n",sizeof(num2=10));
    printf("sizeof(8)是%d\n",sizeof(8));
    printf("%d\n",num2);
    return 0;
}
