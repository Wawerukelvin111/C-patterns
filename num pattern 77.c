#include <stdio.h>
int main(){
    int i,j,n=5,k=1;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%2d",k++);
        }
        printf("\n");
    }
}