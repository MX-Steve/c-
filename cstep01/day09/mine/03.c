/**
 * 函数声明演示
 */
#include <stdio.h>

/*int add(int num , int num1){
    return num + num1;
};
*/
int add(int,int);
int main(){
    int num  = add(3,9);
    printf("%d\n",num);
    return 0;
}
int add(int num , int num1){
    return num + num1;
};
