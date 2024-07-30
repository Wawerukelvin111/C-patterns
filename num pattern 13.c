#include <stdio.h>
int main()
{
	int i,j,x,n=5,y;
	for(i=1;i<=n;i++){
		x=i;
		y=n-i+1;
		for(j=1;j<=n;j++){
			if(j%2==1){
				printf("%3d",y);
			}
			else{
				printf("%3d",x);
			}
			x+=n;
			y+=n;
		}
		printf("\n");
	}
	
	return 0;
}
