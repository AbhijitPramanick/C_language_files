#include<stdio.h>
void printArr(int a[], int n){
    for (int i=0;i<n;i++){
        printf("The value of element %d is %d.\n",i+1,*(a+i));
    }
    *(a+2) = 100;
}
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    printf("\nThe original value of element 3: %d\n",a[2]);
    printArr(a,10);
    printf("\nThe changed value of element 3: %d\n",a[2]);
    return 0;
}