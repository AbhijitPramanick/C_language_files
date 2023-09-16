#include<stdio.h>

int main(){
    float c;
    printf("Enter celcius : ");
    scanf("%f",&c);
    printf("The temp is farenheit %f\n", (c*9/5) + 32);
    return 0;
}