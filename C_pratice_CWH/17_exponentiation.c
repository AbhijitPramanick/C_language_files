#include<stdio.h>
// int expo(int n, int p){
//     int prod=1;
//     for(int i=0;i<p;i++){
//         prod*=n;
//     }
//     return prod;
// }

int expo(int p, int n){
    if(n==0){
        return 1;
    }
    else{
        return p*expo(p,n-1);
    }
}
int main(){
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a power to which the number has to be raised : ");
    scanf("%d",&p);
    printf("%d raised to the power of %d is %d.\n",n,p,expo(n,p));
    return 0;
}