#include<stdio.h>
void pattern(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
void pattern(int a){
    printf("\n\nThe pattern is :\n\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<(2*i+1);j++){
            printf("* ");
        }
        printf("\n");
    }
}