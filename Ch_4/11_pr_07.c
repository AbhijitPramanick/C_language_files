#include<stdio.h>

int main(){
    int n=8, sum=0;
    for(int i=0;i<10;i++){
        sum+=(n*(i+1));
        printf("%d x %d = %d\t...\tSum counts to --> %d\n",n ,i+1 ,n*(i+1), sum);
    }
    printf("\nThe sum of numbers in table of 8 is : %d\n",sum);
    return 0;
}