// Write a program to print a reactangle of simension taken from the user.
#include<stdio.h>
void printRect(int l, int b){
    for(int i=0;i<b;i++){
        for(int j=0;j<l;j++){
            if(i==0||i==b-1||j==0||j==l-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int l,b;
    printf("Enter Length : ");
    scanf("%d",&l);
    printf("Enter breadth : ");
    scanf("%d",&b);
    printRect(l,b);
    return 0;
}