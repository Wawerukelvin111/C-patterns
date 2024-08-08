#include <stdio.h>

void main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        k=i;
        for(j=1;j<=i;j++){
            printf("%3d",k);
            k=k+(5-j);
        }
        printf("\n");
    }

}