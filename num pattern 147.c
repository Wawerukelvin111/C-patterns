#include <stdio.h>

int main(){
    int n=5,x=1;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n*2;j++){
            if(j>=n-i+1 && j<=n+i-1){
                printf("%2d",x++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}