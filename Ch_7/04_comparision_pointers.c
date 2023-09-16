#include<stdio.h>

int main(){
    int a=12,b=43,*x=&a,*y=&a;
    if(x==y){
        printf("\nBoth pointers point to same address and the address is %u\n, x");
    }
    else{
        printf("\nNot pointing to same address.\n");
    }
   
    return 0;
}