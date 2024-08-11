#include <stdio.h>

int main(){
    int i,j,x,n=5;
    for(i=1;i<=n;i++){
        for(x=n-1;x>=i;x--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",i*j);
        }
        printf("\n");
    }
    return 0;
}