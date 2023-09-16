//Program to convert from decimal to binary.
#include<stdio.h>

int main(){
    int n,a[10]= {},swap;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        a[i] = n%2;
        n/=2;
        if(!n){
            break;
        }
    }
    printf("The binary number for the decimal number is :\n");
    for(int i=0;i<5;i++){
        swap = a[i];
        a[i] = a[10-i-1];
        a[10-i-1] = swap;        
    }
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    

    return 0;
}