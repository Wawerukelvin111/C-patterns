#include <stdio.h>
#include <stdio.h>
int main()
{
	int i,j,x,n=5;
	for(i=1;i<=n;i++){
		x=n-i+1;
		for(j=1;j<=n;j++){
			printf("%3d",x);
			x+=n;
		}
		printf("\n");
	}
	
	return 0;
}
