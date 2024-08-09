#include <stdio.h>

int main(){
    int i,j,n=5;
    char ch='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
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