#include <stdio.h>

int main(){
    int i,j,k;
    for(i=4;i>=0;i--){
        for(k=3;k>=i;k--){
            printf(" ");
        }
        for(j=i;j>=0;j--){
            printf("%c ",(i-j)+65);
        }
        printf("\n");
    }
    return 0;
}