#include <stdio.h>

int main(){
    int num = 54321 , num1 = 10 , m = 0;
    printf("%d\n",num);
    num = num/num1;
    printf("%d\n",num);
    num = num/num1;
    printf("%d\n",num);
    
    m = num;
    num = num1;
    num1 = m;
    printf("交换后的数字为%d和%d\n",num,num1);
    return 0;
}
