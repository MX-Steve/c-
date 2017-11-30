/**
 * 把一个非负数拆开显示
 */
#include <stdio.h>

int main(){
    printf("输入一个非负数");
    int num=0,i=0,arr[5]={0};
    
    scanf("%d",&num);
    for(i=4;i>=0;i--){
        arr[i]= num%10;
        num /=10;
        if(!num){
            break;
        }
    }
    for(;i<=4;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
