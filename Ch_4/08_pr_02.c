#include<stdio.h>

int main(){
    int n=10;
    printf("The multiplication table of 10 in reverse order is : \n\n");
    for(int i=n;i;i--){
        printf("%d x %d = %d\n",n,i,n*(i));
    }
    return 0;
}