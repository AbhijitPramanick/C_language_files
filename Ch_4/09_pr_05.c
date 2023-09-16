//sum of first n natural number.
#include<stdio.h>

int main(){
    int n,sum = 0,i=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n){
        sum+=i;
        i++;
        n--;
    }
    printf("The sum is %d.\n",sum);
    return 0;
}   