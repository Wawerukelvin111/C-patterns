#include <stdio.h>

int main(){
    int n=5,i,j;
    int x=(n*(n+1))/2;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("%3d",x--);
        }
        printf("\n");
    }
}