#include <stdio.h>

int main()
{
	int i,j,x,n=5;
	for(i=1;i<=n;i++){
		x=n-i;
		for(j=1;j<=n;j++){
			printf("%2c",x+65);
			x+=n;
		}
		printf("\n");
	}
	
	return 0;
}
