#include <stdio.h>

int main()
{
	int i,j,k=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%2d",k+=2);
		}
		printf("\n");
	}
	
	return 0;
}