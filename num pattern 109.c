#include <stdio.h>

int main(){
    int n=5,x=1,y=n;
    int i,j,s,t1,t2,r1,r2;
    for(i=n;i>=1;i--){
        t1=x;
        t2=y;
        r1=i;
        r2=i+1;
        for(s=1;s<=i;s++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            if((i+j)%2==0){
                printf("%2d",t1);
            }
            else{
                printf("%2d",t2);
            }
            t1-=r1++;
            t2-=r2++;
        }         
        y+=(i-1);
        x+=i;
        printf("\n");
    }
    return 0;
}