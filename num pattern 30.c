#include <stdio.h>

int main()
{
	char i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%2c",i+j+65);
		}
		printf("\n");
	}
	
	return 0;
}
