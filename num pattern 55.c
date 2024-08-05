#include <stdio.h>

int main(){
    int n=5,i,j,x=1;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%3d",x-i);
            x++;
        }
        printf("\n");
    }
    return 0;
}