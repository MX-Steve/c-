/**
 * for
 */
#include <stdio.h>
int main(){
    //int num =0,n=0;
  /*  for(num=1,n=9;num<=n;num++,n--){
        printf("%d\n",num);
    }
    
    for(num=1,n=9;num<=n;num++,n--){
        printf("%d\n",num);
    }
    */
    //鸡兔同笼
    int num = 0;
    for(num = 0;num <=40;num++){
        if(4 * num +2*(40-num)==100){
            printf("兔子有%d只，鸡有%d只",num , 40-num);
            break;
        }
    }
    return 0;
}
