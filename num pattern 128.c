#include <stdio.h>

int main(){
    int i,j,k;
    int n=5;
    for(i=1;i<=n-1;i++){
        for(k=n-1;k>=i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}