#include <stdio.h>

int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%2d",i%2);            
        }
        printf("\n");
    }
    return 0;
}