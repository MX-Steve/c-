/**
 * 编写程序从键盘得到一个0到127之间的证书，把他转换成二进制并显示在屏幕上
 */
#include <stdio.h>
int main(){
    int num = 0;
    unsigned char ch = 0x80;
    printf("请输入一个数字:");
    scanf("%d\n",&num);
    printf("显示结果为：");
    printf("%d",(num & ch) !=0 );
    ch >>=1;
    printf("%d",(num & ch) !=0 );
    ch >>=1;
    printf("%d",(num & ch) !=0 );
    ch >>=1;
    printf("%d",(num & ch) !=0 );
    ch >>=1;
    printf("%d",(num & ch) !=0 );
    ch >>=1;
    printf("%d",(num & ch) !=0 );
    ch >>=1;
    printf("%d",(num & ch )!=0);
    ch >>=1;
    printf("%d\n",(num & ch )!=0);
    return 0;
}
