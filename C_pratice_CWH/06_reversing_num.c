#include<stdio.h>
int reverse(int num){
    int rev=0,rem;
    while(num){
        rem = num%10;
        rev= rev*10+rem;
        num = num/10;
    }
    return rev;
}
int main(){
    int n,rev;
    printf("Enter a number : ");
    scanf("%d",&n);
    rev = reverse(n);
    printf("Reversed number is %d\n",rev);
    return 0;
}