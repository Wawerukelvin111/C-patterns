#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n=5,z=1;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=z;k>=1;k--){
            printf("%d",abs(k-i)+1);
        }
        z+=2;
        printf("\n");
    }
    return 0;
}
   
