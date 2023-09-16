#include<stdio.h>

int main(){
    FILE *fptr;
    int num = 345;
    fptr = fopen("generated.txt","w");
    fprintf(fptr,"This is the content : %d",num);
    fclose(fptr);
    return 0;
}