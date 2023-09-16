// Print the sum of first n natural numbers in O(1)

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     printf("The sum of first %d natural numbers : %d\n",n,n*(n+1)/2);
//     return 0;
// }

// Print the sum of first n natural numbers in O(n)

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of first %d natural numbers is %d.\n",n,sum);
    return 0;
}