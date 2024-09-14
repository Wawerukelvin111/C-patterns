#include <stdio.h>
#include <stdlib.h>

int main(){
    int size=3;
    int i,j;
    for(i=size;i>=-size;i--){
        for(j=abs(i);j<=size;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}
