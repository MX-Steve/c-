#include <stdio.h>

int main(){
    int one = 1,two = 2, five = 5;
    for(one=0;one<=10;one++){
        for(two=0;two<=10;two+=2){
            for(five=0;five<=10;five+=5){
                if(one + two + five == 10){
                    printf("面值为10的算法有%d  %d   %d \n",one/1,two/2,five/5);
                }
            }
        }
    }
    return 0;
}
