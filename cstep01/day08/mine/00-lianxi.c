/**
 * 数组练习
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int r=0,c=0,count=0, arr[10][10]={0},n=0;
    int delta[][2]={-1,-1,-1,0,-1,1,0,-1,0,1,1,-1,1,0,1,1};
    do{
        //1.获得一个随机位置
        r = rand()%10;
        c = rand()%10;
        if(arr[r][c]!=-1){
            arr[r][c]=-1;
            count ++;
        }
        
    }while(count < 10);
    //填充数字
    for(r=0;r<10;r++){
        for(c=0;c<10;c++){
            if(arr[r][c]){
                //把不是地雷的位置都排除掉
                continue;
            }

        }

        for(n=0;n<=7;n++){
            //每次循环处理挨着地雷的一个格子
            int tmp_r = r + delta[n][0];
            int tmp_c = c +delta[n][1];
            if(tmp_r<0 || tmp_r>9){
                continue;
            }
            if(tmp_c<0 || tmp_c>9){
                continue;
            }
            if(arr[tmp_r][tmp_c]==-1){
                continue;
            }
            arr[tmp_r][tmp_c]++;

        }
    }
    for(r=0;r<10;r++){
        for(c=0;c<10;c++){
            if(arr[r][c]==0){
                printf("O");
            }else  if(arr[r][c]==-1){
                printf("X");
            }else{
                printf("%d",arr[r][c]);
            }
        }

        printf("\n");
    }
    return 0;
}
