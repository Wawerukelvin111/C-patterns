#include <stdio.h>
int main(){
    int n=9,x=1;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=x;j++){
            printf("%2d",j);
        }
        if(i<=n/2)
        x++;
        else
        x--;
    printf("\n");    
    }
    return 0;
}