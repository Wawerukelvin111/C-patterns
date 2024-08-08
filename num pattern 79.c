#include <stdio.h>

int main(){
    int i,j;
    int n=4;
    int p2=(n*n)+1;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%3d",p2);
            p2++;
        }
        p2--;//decrement to get the last printed value
        p2=p2-((i-1)*2);//used to get the next printed value
        printf("\n");
    }
}