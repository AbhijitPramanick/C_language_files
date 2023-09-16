#include<stdio.h>

int main(){
    int a[3][3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("The address of element at %d,%d,%d is %d.\n",i,j,k,&a[i][j][k]);
            }
        }
    }
    return 0;
}