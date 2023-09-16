#include<stdio.h>
typedef struct complex{
    float r,i;
}com;
void show(com p[]){
    printf("The complex numbers are:\n\n");
    for(int i=0;i<5;i++){
        printf("Complex number 1 : %f + i%f\n",p[i].r,p[i].i);
    }
    printf("\n");
}
int main(){
    com a[5];
    printf("\nEnter the details of 5 complex numbers : \n");
    for(int i=0;i<5;i++){
        printf("Complex number %d, Real part    \t: ",i+1);
        scanf("%f",&a[i].r);
        printf("Complex number %d, Imaginary part : ",i+1);
        scanf("%f",&a[i].i);
    }
    printf("\nDetails received.\nNow, calling the show function to show the details...\n\n");
    show(a);
    return 0;
}