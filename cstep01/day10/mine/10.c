/**
 * 显示存储区的内容
 */
#include <stdio.h>
void showContent(void*p_v,int type){
    if(!type){
        printf("%d\n",*(int *)p_v);
    }else if(type==1){
        printf("%c\n",*(char *)p_v);
    }else if(type==2){
        printf("%g\n",*(float *)p_v);
    }
}
int main(){
    int num = 0;
    char ch = 'a';
    float fnum = 4.3f;
    showContent(&num,0);
    showContent(&ch,1);
    showContent(&fnum,2);
    return 0;
}
