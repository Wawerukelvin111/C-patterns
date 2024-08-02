#include <stdio.h>

int main()
{
	int i,j,t;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%3d",i*j);
            t+=2;
		}	
		printf("\n");
	}
	return 0;
}
