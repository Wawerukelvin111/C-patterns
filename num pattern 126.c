#include <stdio.h>

int main(){
    int n=5;
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf(" ");        
        }
        for(k=1;k<=n-i;k++){
            printf("%c",i+65);
        }
        printf("\n");
    }
    return 0;
}