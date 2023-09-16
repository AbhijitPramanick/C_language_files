#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    ptr = fopen("abhijit.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("The values of three intergers are : %d %d %d\n",a,b,c);
    fclose(ptr);
    return 0;
}