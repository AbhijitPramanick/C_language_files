#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter the size of memory to be allocated dynamically : ");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));
    for(int i=0;i<n;i++){
        printf("Value of %d element is %d\n",i,ptr[i]);
    }
    return 0;
}