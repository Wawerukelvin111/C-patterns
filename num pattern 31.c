#include <stdio.h>

int main()
{
	int i,j,x,n=5;
	for(i=0;i<n;i++){
		x=i;
		for(j=1;j<=n;j++){
			x+=n;
			printf("%2c",x-n+65);
		}
		printf("\n");
	}
	
	return 0;
}
