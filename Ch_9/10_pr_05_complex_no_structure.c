#include<stdio.h>
typedef struct complex{
    float r,i;
}com;
void show(com c){
    printf("Real part = %f\n",c.r);
    printf("Imaginary part = %f\n",c.i);
}
int main(){
    com c;
    c.r = 123.456;
    c.i = 987.654;
    show(c);
    return 0;
}