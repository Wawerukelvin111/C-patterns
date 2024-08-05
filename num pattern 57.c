#include <stdio.h>

int main(){
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        k=i;
        for(j=1;j<=i;j++){
            printf("%3d",k);
            k=k+(n-j);
        }
        printf("\n");
    }
    return 0;
}