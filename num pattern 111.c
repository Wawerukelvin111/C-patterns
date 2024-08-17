#include <stdio.h>

int main(){
    int n=5,x=n,y;
    int i,j,s,t;
    for(i=n;i>=1;i--){
        t=x;
        y=i+1;
        for(s=1;s<i;s++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            printf("%2d",t);
            t=t-y;
            y++;
        }
        x=x=x+i-1;
        printf("\n");
    }
    return 0;
}