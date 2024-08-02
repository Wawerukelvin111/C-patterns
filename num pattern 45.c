#include <stdio.h>

int main()
{
	int i,j,k=0;
	for(i=1;i<=4;i++){
        k+=i;
		for(j=k;j>k-i;j--){
			printf("%2d",j);
		}	
		printf("\n");
	}
	return 0;
}
