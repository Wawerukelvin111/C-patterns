#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5,z=1,l=1;
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            printf(" ");
        }
        for(k=1;k<=z;k++){
            printf("%c",abs(k-l)+65);
        }
        l++;
        z+=2;
        printf("\n");
    }
    return 0;
}