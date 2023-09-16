#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the length : ");
    scanf("%d",&a);
    printf("Enter the breadth : ");
    scanf("%d",&b);
    int area = a*b;
    printf("The area is : %d\n",area);
    return 0;
}