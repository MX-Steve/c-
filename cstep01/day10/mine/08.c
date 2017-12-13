/**
 * 指针无类型指针
 */
#include <stdio.h>
int main(){
    int num=0;
    char ch = "a";
    float fnum = 5.3f;
    void *p_num = &num;
    printf("%d\n",  *(int *)p_num);
    p_num = &ch;
    printf("%c\n",*(char *)p_num);
    p_num = &fnum;
    printf("%g\n",*(float *)p_num);
    return 0;
}
