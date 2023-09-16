#include<stdio.h>
void printPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<n-i;k++){
            printf("%d",i);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}