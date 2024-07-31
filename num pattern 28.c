#include <stdio.h>

int main()
{
	char i,j;
	
	for(i='A';i<='E';i++){
		for(j='E';j>='A';j--){
			printf("%2c",j);
		}
		printf("\n");
	}
	
	return 0;
}
