/*
 * 字符串演示
 * */
#include <stdio.h>
int main() {
    char ch = 0;
    int num = 0;
    float fnum = 0.0f;
    char str[20] = {0};
    //printf("%c %d %g\n", 't', 45, 6.5f);
    sprintf(str, "%c %d %g\n", 't', 45, 6.5f);
    printf("%s", str);
    sscanf("y 23 6.5", "%c%d%g", &ch, &num, &fnum);
    printf("数字是%d %g %c\n", num, fnum, ch);
    return 0;
}








