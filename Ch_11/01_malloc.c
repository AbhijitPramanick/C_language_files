#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(6 * sizeof(int));
    printf("Enter 6 elements :\n");
    for(int i=0;i<6;i++){
        printf("Enter %d element : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("%d element : %d\n",i+1,ptr[i]);
    }
    return 0;
}