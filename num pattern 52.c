#include <stdio.h>
int main(){
    int i,j,n=5;
    int x=(n*(n+1))/2;
    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
            printf("%3d",x--);
        }
        printf("\n");
    }
}