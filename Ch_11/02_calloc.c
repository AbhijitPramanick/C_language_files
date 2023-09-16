#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)calloc(6, sizeof(int));
    printf("Contents :\n");
    for(int i=0;i<6;i++){
        printf("Element %d is : %d\n",i,ptr[i]);
    }
    return 0;
}