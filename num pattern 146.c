#include <stdio.h>

int main(){
    int n=5;
    int z=0;
    int i,j,k;
    for(i=n;i>=1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=z;k>=0;k--){
            printf("%d",k+j);
        }
        z+=2;
        printf("\n");
    }
    return 0;
}