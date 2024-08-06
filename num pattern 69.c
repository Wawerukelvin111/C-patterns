#include <stdio.h>

int main(){
    int i,j;
    int n=5;
    for(i=0;i<n;i++){
        for(j=i;j>=0;j--){
            printf("%2c",j+65);                       
        }
        printf("\n");
    }
    return 0;
}