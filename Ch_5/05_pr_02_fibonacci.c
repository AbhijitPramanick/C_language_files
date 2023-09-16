#include<stdio.h>
void fib(int n){
    int a=0,b=1,i=1,sum=0;
    printf("%d %d ",a,b);
    while(i<=n-2){
        sum = a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
        i++;
    }
    
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("the fibonacci series upto %d number is as following :\n");
    fib(n);
    return 0;
}