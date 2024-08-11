#include <stdio.h>

int main(){
    int i,j,l,n=5;
    for(i=1;i<=n;i++){
        for(l=n-1;l>=i;l--){
            printf(" ");
        }
        l=1;
        for(j=1;j<=i;j++){
            printf("%d",l);
            l=l*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}