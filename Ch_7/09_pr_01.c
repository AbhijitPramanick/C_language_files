#include<stdio.h>

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    int *ptr = a;
    printf("The value at third element : %d\n",a[2]);
    printf("The value pointed by the p[ointer after increamenting by 2 : %d\n",*(ptr+2));
    if(a[2] == *(ptr+2)){
        printf("The values are same.\n");
    }
    else{
        printf("These dop not point to the same.\n");
    }
    return 0;
}