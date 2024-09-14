#include <stdio.h>
int main(){
    int n=9,px=1,y=1;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=px;j++){
            printf("%3d",y++);
        }
        if(i<=n/2)
        px++;
        else
        px--;
    printf("\n");    
    }
    return 0;
}