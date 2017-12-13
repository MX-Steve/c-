/**
 * 指针演示
 */
#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    printf("arr是%p,arr+1是%p,arr-1是%p",arr,arr+1,arr-1);
    printf("arr+3是%p,&arr[3]是%p\n",arr+3,&arr[3]);
    printf("&arr[3]-arr是%d \n",&arr[3]-arr);
    return 0;
}
