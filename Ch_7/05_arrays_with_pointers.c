#include<stdio.h>

int main(){
    int m[4];
    int *ptr = m;
    for (int i=0;i<4;i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++){
        printf("The marks of student %d is %d.\n",i+1,*(--ptr));
    }
    return 0;
}