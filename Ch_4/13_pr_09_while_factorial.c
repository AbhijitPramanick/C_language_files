#include<stdio.h>

int main(){
    int num,prod=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The factorial is:\n");
    while(num){
        prod*=num;
        num--;
    }
    printf("\t%d\n",prod);
    return 0;
}