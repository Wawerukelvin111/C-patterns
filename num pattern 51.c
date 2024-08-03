#include <stdio.h>

int main()
{
	int i,j,t1,t2,r1,r2,x=1,y=5;
	for(i=5;i>=1;i--){
        t1=x;
        t2=y;
        r1=i;
        r2=i+1;
		for(j=5;j>=i;j--){
            if((i+j)%2==1){
                printf("%3d",t1);
            }
			else{
                printf("%3d",t2);
            }
            t1=t1-r1++;
            t2=t2-r2++;
		}
        y=y+i-1;
        x=x+i;	
		printf("\n");
	}
	return 0;
}
