#include <stdio.h>

int main(){
    int min_stars=1;
    int p_height=5;
    int p_space=p_height-1;
    int i,j,k;
    for(i=0;i<p_height;i++){
        for(j=p_space;j>i;j--){
            printf(" ");
        }
        for(k=0;k<min_stars;k++){
            printf("*");
        }
        min_stars+=2;
        printf("\n");
    }
    return 0;
}