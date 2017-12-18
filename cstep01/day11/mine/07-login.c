/**
 * 模拟登陆练习
 */
#include <stdio.h>
#include <string.h>
int main(){
    char str[10]={0};
    int num=0;
    for(num=0;num<3;num++){
        printf("请输入用户名：");
        fgets(str,10,stdin);
        if(strlen(str) == 9 &&str[8]!="\n"){
            scanf("%*[^\n]");
            scanf("%*c");
        }
        if( strcmp(str,"admin\n")){
            continue;
        }
        printf("请输入密码：");
        fgets(str,10,stdin);
        if(strlen(str)==9&&str[8]!="\n"){
            scanf("%*[^\n]");
            scanf("%*c");
        }
        if(strcmp(str,"123456\n")){
            continue;
        }
        break;
    }
    if(num < 3){
        printf("登陆成功\n");
    }else{
        printf("登陆失败");
    }
    
    return 0;
}
