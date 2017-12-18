/**
 * atoi
 * atof
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("%d\n", atoi("35.5abc"));
    printf("%lg\n", atof("35.5abc"));
    return 0;
}
