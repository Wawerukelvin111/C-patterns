#include <stdio.h>

int main()
{
	int i,j;
	for(i=5;i>=1;i--){
		for(j=i;j<=5;j++){
			printf("%2d",j);
		}
		printf("\n");
	}
	
	return 0;
}
