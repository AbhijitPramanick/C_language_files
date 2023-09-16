#include<stdio.h>
void createTable(int *p, int n){
    for(int i=0;i<10;i++){
        *(p+i) = n*(i+1);
    }
}
void printTable(int *p,int m){
    printf("\nThe contents of the table generated is :\n");
    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n",m, i+1, *p++);
    }
}
int main(){
    int a[10],n;
    printf("Enter a number : ");
    scanf("%d",&n);
    createTable(a,n);
    printTable(a,n);
    return 0;
}