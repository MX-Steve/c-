/**
 * 54321
 * 5432
 * 54
 * 5
 */
#include <stdio.h>
int main(){
    int n = 0,i=0;
    for(i=1;i<=5;i++){
        for(n = 5;n>=i;n--){
            printf("%d",n);
        }
        printf("\n");
    }
    printf("的风口浪\n");
    int num = 0;

    for(num = 54321;num>=5;num /= 10){
        printf("%d\n",num);
    }
    return 0;
}
