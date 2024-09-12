#include <stdio.h>

int main(){
    int p_height=5;
    int width=p_height*2-1;
    int p_space=p_height-1;
    int i,j,k;
    for(i=p_height;i>=1;i--){
        for(j=p_space;j>=i;j--){
            printf(" ");
        }
        for(k=0;k<width;k++){
            printf("%c",k+65);
        }
        width-=2;
        printf("\n");
    } 
    return 0;
}