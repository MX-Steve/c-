/**
 * 字符串演示
 */
#include <stdio.h>
#include <string.h>

int main(){
    printf("%p\n","abc");
    printf("%p\n","abc");
    printf("%p\n","ab""c");
    printf("%c\n",*"abc");
    printf("%d\n",*("abc"+3));
    //*"abc" = "x"; 错误
    char str[10]="abc";
    printf("%d\n", sizeof(str));
    printf("%s\n",str);
    printf("字符串长度：%d\n",strlen(str));
   // printf("拼接后的字符串为：%s\n",strncat(str,"xasdfasfdsafsadsfsdayz",7));
    printf("%d\n",sizeof(str));
    printf("%d\n",strcmp(str,"abcd"));
    printf("%d\n",strcmp(str,"abcy"));
    printf("%d\n",strncmp(str,"abc",3));
    printf("%s\n",strcpy(str,"asd"));
    printf("%s\n",strncpy(str,"xy",2));
    memset(str,'j',5);
    printf("str是%s\n",str);
    char stu[10]="lsihan";
    printf("%p\n", strstr("sfdlasjflihanssfd","sss"));
    return 0;
}
