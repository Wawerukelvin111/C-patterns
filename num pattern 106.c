#include <stdio.h>

int main(){
    int i,j,k=1,n=5;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i>=j){
                printf("%2d",k++);
            }
            else{
                printf(" ");
            }            
        }
        printf("\n");
    }
    return 0;
}