#include <stdio.h>

int main(){
    int n=5,i,j,px;
    for(i=1;i<=n;i++){
        px=1;
        for(j=1;j<=i;j++){
            printf("%2d",px);
            px=px*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}