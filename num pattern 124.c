#include <stdio.h>

int main(){
    int n=5;
    int i,j,k;
    for(i=n-1;i>=0;i--){
        for(j=n-1;j>=i;j--){
            printf(" ");        
        }
        for(k=0;k<=i;k++){
            printf("%c",i+65);
        }
        printf("\n");
    }
    return 0;
}