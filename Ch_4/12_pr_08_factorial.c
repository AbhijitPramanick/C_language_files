#include<stdio.h>

int main(){
    int num,prod=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=num;i;i--){
        prod*=i;
    }
    printf("The factorial of %d is %d.\n",num,prod);
    return 0;
}   