#include <stdio.h>
#include <string.h>
int main(){
    char str[10]= "abc";
    printf("有效字符的站位服个数是%d\n",sizeof(str));
    printf("有效字符个数是%d\n",strlen(str));
    strcat(str,"xyz");
    printf("%s\n",str);
    printf("%s\n",strncat(str,"ionpjsdf",3));
    printf("%d\n",strcmp("abc","abd"));
    printf("%d\n",strncmp("abc","abd",2));
    printf("%s\n", strcpy(str,"asd"));
    printf("%s\n",str);
    printf("%s\n",strncpy(str,"xyz",2));
    printf("%s\n",str);
    printf("%s\n",memset(str,'h',9));
    printf("%s\n","abcdefghijklmn","def");
    return 0;
}
