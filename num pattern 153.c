#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n=4,z=1;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=i-1;k>=-(i-1);k--){
            printf("%d",z-abs(k));
        }
        z+=2;
        printf("\n");
    }
    return 0;
}
   
