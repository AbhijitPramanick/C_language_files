#include<stdio.h>

int main(){
    int i=1,num;
    printf("Enter 4 : ");
    scanf("%d",&num);
    do{
        printf("%d\n",i);
        i++;
        num--;
    }while(num);
    return 0;
}