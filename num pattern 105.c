#include <stdio.h>

int main(){
    int i,j,x=1,n=4;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i>=j){
                printf("%2d",x*x);
                x++;
            }
            else{
                printf(" ");
            }            
        }
        printf("\n");
    }
    return 0;
}