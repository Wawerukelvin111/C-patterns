#include <stdio.h>

int main(){
    int n1=0,n2=1,r=n1+n2;
    int i,j;
    for(i=1;i<5;i++){
        for(j=1;j<=i;j++){
            printf("%3d",r);
            r=n1+n2;
            n1=n2;
            n2=r;            
        }
        printf("\n");
    }
    return 0;
}