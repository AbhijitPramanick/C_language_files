#include<stdio.h>
void mulTable( int *a, int num){
    for(int j=0;j<10;j++){
        a[j] = num*(j+1);
        // *(a+j) = num*(j+1);
    }
}
int main(){
    int a[3][10];
    // for(int i=0;i<10;i++){
    //     if(i==0){
    //         for(int j=0;j<10;j++){
    //             a[i][j] = 2*(j+1);
    //         }
    //     }
    //     else if(i==1){
    //         for(int j=0;j<10;j++){
    //             a[i][j] = 7*(j+1);
    //         }
    //     }
    //     else if(i==2){
    //         for(int j=0;j<10;j++){
    //             a[i][j] = 9*(j+1);
    //         }
    //     }
    // }
    mulTable(a[0],2);
    mulTable(a[1],7);
    mulTable(a[2],9);

    printf("The contents of the arrays are : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}