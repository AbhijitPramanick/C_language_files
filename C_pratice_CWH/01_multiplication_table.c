// Print the multiplication table
#include<stdio.h>

int main(){
    int m;
    printf("Enter a number whose multiplication table is to be printed: ");
    scanf("%d",&m);
    printf("The multiplication table of %d is :",m);
    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n",m,i+1,m*(i+1));
    }
    return 0;
}