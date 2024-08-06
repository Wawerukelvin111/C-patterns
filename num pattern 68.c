#include <stdio.h>

int main(){
    int i,j;
    int n=5;
    for(i=n-1;i>=0;i--){
        for(j=n-1;j>=i;j--){
            printf("%2c",i+65);                       
        }
        printf("\n");
    }
    return 0;
}