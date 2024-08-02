#include <stdio.h>

int main()
{
	int i,j,x=1,y,t;
	for(i=5;i>=1;i--){
        y=i;
        t=x;
		for(j=5;j>=i;j--){
			printf("%3d",t);\
            t-=y;
            y++;
		}
        x+=i;	
		printf("\n");
	}
	return 0;
}
