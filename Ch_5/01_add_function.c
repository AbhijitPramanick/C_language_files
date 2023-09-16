#include<stdio.h>
int sum(int a, int b);
int main(){
    int x,y;
    printf("Enter number 1 : \n");
    scanf("%d",&x);
    printf("Enter number 2 : \n");
    scanf("%d",&y);
    printf("The sum of %d and %d is %d.\n",x,y,sum(x,y));
    return 0;
}
int sum(int a, int b){
    return(a+b);
} 