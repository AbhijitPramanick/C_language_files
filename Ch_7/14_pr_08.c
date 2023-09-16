#include<stdio.h>
void mulTable( int *a, int num){
    for(int j=0;j<10;j++){
        a[j] = num*(j+1);
        // *(a+j) = num*(j+1);
    }
}
int main(){
    int a[3][10],num1,num2,num3;
    printf("Enter three numbers for which the tables are to be printed : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    mulTable(a[0],num1);
    mulTable(a[1],num2);
    mulTable(a[2],num3);

    printf("The contents of the arrays are : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}