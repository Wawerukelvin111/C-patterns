#include <stdio.h>

int main(){
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n*2;j++){
            if(j>=n-i+1 && j<=n){
                printf("%d",j);
            }
            else if(j>n && j+1<=n+i){
                printf("%d",n*2-j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
