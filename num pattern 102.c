#include <stdio.h>

int main(){
    int i,j,x=1;
    for(i=5;i>=1;i--){
        for(j=1;j<=5;j++){
            if(i<=j){
                printf("%d",x);
                x+=2;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}