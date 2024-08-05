#include <stdio.h>

int main(){
    int n=4,i,j,x=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%3d",x*x);
            x++;
        }
        printf("\n");
    }
    return 0;
}