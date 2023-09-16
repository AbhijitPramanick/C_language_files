// //Reversing the array
#include<stdio.h>
void reverse(int *, int);
void printArr(int *, int);
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    reverse(a,10);
    printArr(a,10);
    return 0;
}
void reverse(int a[], int m){
    int temp;
    for(int i=0;i<m/2;i++){
        temp = a[i];
        a[i]= a[m-i-1];
        a[m-i-1] = temp; 
    }
}
void printArr(int *p,int m){
    printf("\nThe content of the reversed array is :\n");
    for(int i=0;i<10;i++){
        printf("%d ", *p++);
    }
}
