#include<stdio.h>
int main(){
    FILE *ptr;
    int num,num2;
    ptr = fopen("abhijit2.txt","r");
    if(ptr==NULL){
        printf("The file does not exist.\n");
    }
    else{
        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);
        printf("The content is : %d.\n",num);
        printf("The content is : %d.\n",num2);
    }
    fclose(ptr);
    return 0;
}
