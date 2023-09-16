#include<stdio.h>
void printPattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number of lines to beprinted for the pattern : ");
    scanf("%d",&n);
    printPattern2(n);
    return 0;
}