#include <stdio.h>

int main(){
    int i,j,n=5;
    int k=(n*(n+1))/2;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i>=j){
                printf("%2d",k--);
            }
            else{
                printf(" ");
            }            
        }
        printf("\n");
    }
    return 0;
}