/**
 * sprintf()函数演示
 */
#include <stdio.h>

int main(){
    char str[20]={0};
    int num=0;
    float fnum = 0.0f;
    char ch = 0;
    sscanf("y 23 6.5","%c%d%g",&ch,&num,&fnum);
    printf("%d %g %c\n",num,fnum,ch);
    sprintf(str,"%c %d %g\n",'t',45,6.5f);
    printf("%s",str);
    return 0;
}
