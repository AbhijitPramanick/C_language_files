#include<stdio.h>

int main(){
    int m[5];
    for (int i=0;i<5;i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",&m[i]);
    }
    for(int i=0;i<5;i++){
        printf("The marks of student %d is %d\n",i+1,m[i]);
    }
    return 0;
}