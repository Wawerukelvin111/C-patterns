#include <stdio.h>

int main(){
    int n=3;
    int i,j,k,z=1;
    int px=1;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        for(k=0;k<z;k++){
            printf("%4d",px*px);
            px++;
        }
        z+=2;
        printf("\n");
    }
    return 0;
}