#include <stdio.h>

int main()
{
	int i,j,n=5;
    int x=n,y,t;
    for(i=n;i>=1;i--)
	{
        t=x;
        y=i+1;        
		for(j=n;j>=i;j--){
            printf("%3d",t);
            t=t-y;
            y++;
        }
        x=x+i-1;			
		printf("\n");
	}
	return 0;
}
