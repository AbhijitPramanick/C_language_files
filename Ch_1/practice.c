#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius : ");
    scanf("%d",&r);
    int area = 3.14*r*r;
    printf("The area of the circle is : %f\n",(float)3.14*r*r);
    return 0;
}