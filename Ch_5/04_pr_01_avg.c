#include<stdio.h>
float avg(int,int,int);
int main(){
    int a,b,c;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter number 2 : ");
    scanf("%d",&b);
    printf("Enter number 3 : ");
    scanf("%d",&c);
    printf("The sum of %d, %d and %d is %f\n",a,b,c,avg(a,b,c));
    return 0;
}
float avg(int a, int b, int c){
    float r;
    r = (float)(a+b+c)/3;
    return r;
} 