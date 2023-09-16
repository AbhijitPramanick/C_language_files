#include<stdio.h>

int sum(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is : %d.\n",n,sum(n));
    return 0;
}

int sum(int a){
    int s = 0, i = 1;
    while(i<=a){
        s+=i;
        i++;
    }
    return s;
}