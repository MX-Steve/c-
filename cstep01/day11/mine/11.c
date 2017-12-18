/**
 * sprintf/sscanf
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    //char str[]={0};
    //printf("%c %d %g\n",'t',45,6.7);
   /* sprintf(str,"%c %d %g\n",'t',45,6.7);
    printf("%s",str);
    char ch = 0;
    int num = 0;
    float fnum = 0.0f;
    sscanf("y 23 5.6","%c%d%g",&ch,&num,&fnum);
    printf("数字是%d %g %c\n",num,fnum,ch);
    */
    printf("%d\n",atoi("23.5fsfdas"));
    printf("%lg\n",atof("23.5fsfdas"));
    return 0;
}
