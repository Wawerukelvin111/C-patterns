#include <stdio.h>

int main(){
    int n=5;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=j){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}