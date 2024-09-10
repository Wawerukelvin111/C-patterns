#include <stdio.h>

int main(){
    int n=5,z=0;
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            printf(" ");
        }
        for(k=0;k<=z;k++){
            printf("%c",z-k+65);
        }
        z+=2;
        printf("\n");
    }
    return 0;
}