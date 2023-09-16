//Print the larget element of the array.

#include<stdio.h>

int main(){
    int a[10] = {8,6,1,2,5,9,0,4,3,7};
    int size = sizeof(a)/sizeof(int);
    int big = a[0];
    for(int i=1;i<size;i++){
        if(a[i]>big){
            big = a[i];
        }
    }
    printf("The biggest element in the array is : %d\n",big);
    return 0;
}