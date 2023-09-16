#include<stdio.h>
void pattern(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}

void pattern(int a){
    if(a==1){
        printf("* \n");
        return;
    }
    pattern(a-1);
    for(int i=0;i<2*a-1;i++){
        printf("* ");
    }
    printf("\n");
}