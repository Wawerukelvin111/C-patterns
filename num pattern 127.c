#include <stdio.h>

int main(){
    int n=5;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf(" ");        
        }
        for(k=n-i;k>=0;k--){
            printf("%c",k+65);
        }
        printf("\n");
    }
    return 0;
}