#include <stdio.h>

int main()
{
	char i,j;
	
	for(i='E';i>='A';i--){
		for(j='A';j<='E';j++){
			printf("%2c",i);
		}
		printf("\n");
	}
	
	return 0;
}
