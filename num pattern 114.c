#include <stdio.h>

int main(){
    int n=5;
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=i;k>=0;k--){
            printf("%c",k+65);
        }      
        printf("\n");
    }
    return 0;
}