// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("Enter the dimension of square : ");
//     scanf("%d",&a);
//     printf("The area od sqaure with side %d is %f\n",a,pow(a,2));
//     return 0;
// }

#include<stdio.h>

float squareArea(int a);
int main(){
    int a;
    printf("Enter the doimension of the square : ");
    scanf("%d",&a);
    printf("The area of the square with dimension %d is %f\n",a,squareArea(a));
    return 0;
}
float squareArea(int s){
    return(s*s);
}