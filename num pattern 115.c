#include <stdio.h>

int main(){
    int n=5;
    int i,j,k;
    for(i=n;i>=1;i--){
        for(j=i;j>1;j--){
            printf(" ");
        }
        for(k=i;k<=n;k++){
            printf("%c",k+64);
        }      
        printf("\n");
    }
    return 0;
}