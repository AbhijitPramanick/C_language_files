#include<stdio.h>

int main(){
    int m[] = {5,4,3,2,1};
    for(int i=0;i<5;i++){
        printf("The marks of student %d : %d\n",i+1,m[i]);
    }
    return 0;
}