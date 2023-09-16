#include<stdio.h>
void printArr(int *p,int m){
    printf("\nThe contents of the array is :\n");
    for(int i=0;i<10;i++){
        printf("%d ", *p++);
    }
}
int countPos(int *ptr, int n){
    int count = 0;
    for(int i=0;i<10;i++){
        if(*(ptr+i) >= 0){
            ++count;
        }
    }
    return count;
}
int main(){
    int a[] = {1, -2, 3, -4, 5, -6, 7, -8, 9, 0};
    int count = countPos(a,10);
    printArr(a,10);
    printf("\nNumber of positive numbers (including zeroes) in the array is : %d\n",count);
    return 0;
}