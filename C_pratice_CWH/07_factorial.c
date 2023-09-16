// Factorial of a number

// #include<stdio.h>

// int main(){
//     int n,prod=1;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     while(n){
//         prod*=n;
//         n--;
//     }
//     printf("The factorial of a number is : %d\n",prod);
//     return 0;
// }
#include<stdio.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The factorial of number is %d\n",fact(n));
    return 0;
}