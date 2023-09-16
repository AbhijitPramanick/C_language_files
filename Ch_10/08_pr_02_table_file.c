#include<stdio.h>

int main(){
    FILE *ptr;
    int n,i;
    
    printf("Enter the number whose table is to be printed and stored\n");
    scanf("%d",&n);
    printf("Generating the table of %d...\n",n);
    ptr = fopen("Table.txt","w");
    fprintf(ptr,"Table of %d is as follows:\n",n);
    for(i=0;i<10;i++){
        printf("%d x %d = %d\n",n,i+1,n*(i+1));
        fprintf(ptr,"%d x %d = %d\n",n,i+1,n*(i+1));
    }
    fclose(ptr);
    return 0;
}