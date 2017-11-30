/**
 * break死循环
 */
#include <stdio.h>
int main(){
    int num = 0;
    for(num=0;num<=100;num++){
        if(num%7==0){
            continue;
        }
        printf("%d",num);
    }
    printf("\n");

    return 0;
}
