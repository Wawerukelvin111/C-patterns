#include <stdio.h>

int main(){
    int i,j,s;
    int n=5;
    int x=1,y,t;
    for(i=n;i>=1;i--){
        y=i;
        t=x;
        for(s=1;s<i;s++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            printf("%2d",t);
            t-=y;
            y++;
        }
        x+=i;
        printf("\n");
    }
    return 0;
}    