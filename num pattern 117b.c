#include <stdio.h>

int main(){
    int n=5;
    int i,j;
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
            if(i>=j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}