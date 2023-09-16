#include<stdio.h>

int main(){
    int num,prime=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            prime = 0;
            break;
        }
    }
    if(prime){
        printf("%d is a prime number.\n",num);
    }
    else{
        printf("%d is a composite number.\n",num);
    }
    return 0;
}