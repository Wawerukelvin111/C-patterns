#include <stdio.h>

int main(){
    int n=5;
    int i,j,s;
    int x=1;
    for(i=0;i<n;i++){
        for(s=0;s<i;s++){
            printf(" ");
        }
        for(j=n-1;j>=i;j--){
            printf("%2d",x-i);
            x++;
        }
        printf("\n");
    }
    return 0;
}