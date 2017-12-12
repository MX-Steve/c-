/*
 * 无类型指针演示
 * */
#include <stdio.h>
int main() {
    char ch = 't';
    int num = 34;
    float fnum = 4.5f;
    void *p_v = NULL;
    p_v = &ch;
    printf("%c\n", *(char *)p_v);
    p_v = &num;
    printf("%d\n", *(int *)p_v);
    p_v = &fnum;
    printf("%g\n", *(float *)p_v);
    return 0;
}






