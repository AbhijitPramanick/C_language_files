#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r");
    char c = fgetc(ptr);
    while(c != EOF){
        printf("%c",c);
        c = fgetc(ptr);
    }
    printf("\n");
    fclose(ptr);
    return 0;
}