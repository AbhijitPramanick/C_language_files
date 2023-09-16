#include<stdio.h>
void printArr(int*,int);
int main(){
    int a[]= {1,2,3,4,5,6,7,8,9,0};
    int *ptr = a;
    printArr(ptr,10);
    return 0;
}
void printArr(int *p, int n){
    for (int i=0;i<n;i++){
        printf("The value of the element %d is %d\n",i+1,*(p+i));
    }
}