#include <stdio.h>

int main(){
    int m=1;
    int p_height=5;
    int p_spaces=p_height-1;
    int i,j,k;
    for(i=0;i<p_height;i++){
        for(j=p_spaces;j>i;j--){
            printf(" ");
        }
        for(k=0;k<m;k++){
            printf("%c",k+65);
        }
        m+=2;
        printf("\n");
    }
}
