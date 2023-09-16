// // Write a program to find the prime numbers in given range.


// #include <stdio.h>

// int main()
// {
//     int u, v, count = 0, prime;
//     printf("Enter the range to find the prime numbers in between :\nEnter Lower limit : ");
//     scanf("%d",&u);
//     printf("Enter Upper limit : ");
//     scanf("%d",&v);
//     printf("\nFollowing is the list of prime numbers between %d and %d both include.\n",u,v);
//     if (u <= 2)
//     {
//         count++;
//         printf("2\n");
//     }
//     for (int n = u; n <= v; n++)
//     {
//         prime = 1;
//         if (n <= 2)
//         {
//             continue;
//         }
//         for (int j = 2; j * j <= n; j++)
//         {
//             if (n % j == 0)
//             {
//                 prime = 0;
//                 break;
//             }
//         }
//         if (prime)
//         {
//             count++ ;
//             printf("%d\n",n);
//         }
//     }
//     return 0;
// }



#include<stdio.h>
int isPrime(int n){
    if(n<2){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int m,n,count=0;
    printf("Enter first number : ");
    scanf("%d",&m);
    if(m==2){
        printf("Error!!!\n");
        return 0;
    }
    printf("Enter second number : ");
    scanf("%d",&n);
    printf("Prime numbers in range %d and %d included are : \n",m,n);
    for(int i=m;i<=n;i++){
        if(isPrime(i)){
            count++;
            printf("%d\n",i);
        }
    }
    printf("\n\nNumber of prime numbers : %d\n",count);
    return 0;
}