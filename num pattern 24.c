#include <stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++){
		for(j=0;j<5;j++){
			printf("%3d",j%2);
		}
		printf("\n");
	}
	;
	return 0;
}
