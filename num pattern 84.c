#include <stdio.h>

int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=0;j<i;j++){
            printf("%2d",j%2);
        }
        printf("\n");
    }
}