#include <stdio.h>

int main()
{
	char ch='A';
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%2c",ch);
			if(ch<'Z'){
				ch++;
			}
			else{
				ch='A';
			}
		}
		printf("\n");
	}
	
	return 0;
}
