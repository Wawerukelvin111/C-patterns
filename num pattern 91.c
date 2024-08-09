#include <stdio.h>

int main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=n-i;j>=0;j--){
            printf("%2c",j+65);
        }
        printf("\n");
    }
    return 0;
}