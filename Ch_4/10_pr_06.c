#include<stdio.h>

int main(){
    int n,sum = 0,i=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    do{
        if(!n)
            break;
        else{
            sum+=i;
            i++;
            n--;
        }
    }while(n);
    printf("The sum is %d.\n",sum);
    return 0;
}