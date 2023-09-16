#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("getc_demo.txt","r");
    // // char c = fgetc(ptr);
    // printf("The value of the character is : %c\n",fgetc(ptr));
    // fclose(ptr);    
    ptr = fopen("putc_demo.txt","w");
    putc('c',ptr);
    fclose(ptr);

    return 0;
}