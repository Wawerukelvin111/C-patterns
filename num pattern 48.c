#include <stdio.h>

int main()
{
	int i,j,t=1;
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
			printf("%3d",t);
            t+=2;
		}	
		printf("\n");
	}
	return 0;
}
