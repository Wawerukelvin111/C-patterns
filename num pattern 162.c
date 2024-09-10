#include <stdio.h>

int main(){
    int p_height=4;
    int max_stars=p_height*2-1;
    int p_space=p_height-1;
    int i,j,k;
    for(i=p_height;i>=1;i--){
        for(j=p_space;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=max_stars;k++){
            printf("*");
        }
        max_stars-=2;
        printf("\n");
    } 
    return 0;
}