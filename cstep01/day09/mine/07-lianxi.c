/**
 * 递归练习
 */
#include <stdio.h>

int add(int num){
    if(num==1){        
       return 1;
    }
    return  add(num-1) + num;
}

int main(){
    int sum = add(10);
    printf("和为：%d\n",sum);
    return 0;
}
