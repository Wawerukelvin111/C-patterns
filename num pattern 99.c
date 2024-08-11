#include <stdio.h>

int main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=5;j++){
            if(i<=j){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}