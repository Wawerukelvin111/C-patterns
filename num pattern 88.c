#include <stdio.h>

int main(){
    int i,j;
    for(i=0;i<=4;i++){
        for(j=4;j>=i;j--){
            printf("%2c",j+65);
        }
        printf("\n");
    }
    return 0;
}