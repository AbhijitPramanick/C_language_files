#include<stdio.h>
int fac(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d.\n",n,fac(n));
    return 0;
}
int fac(int x){
    if (x){
        return(x * fac(x-1));
    }
    else
        return 1;
    
}