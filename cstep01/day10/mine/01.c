/**
 * 递归
 */
#include <stdio.h>

int feb(int n){
    static int arr[50]={0};
    if(n<=1){
        return 1;
    }
    if(!arr[n-2]){
        arr[n-2]=feb(n-2);
    }
    if(!arr[n-1]){
        arr[n-1] = feb(n-1);
    }
    return arr[n-2]+arr[n-1];

}

int main(){
    int count = feb(40);
    printf("%d\n",count);
    return 0;
}
