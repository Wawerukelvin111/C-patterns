#include <stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%3d",i%2);
		}
		printf("\n");
	}
	
	return 0;
}
