// Write a program to reverse a string taken from user.

#include<stdio.h>
#include<string.h>
int main(){
    char a[10],c;
    printf("Enter a string of size 10 : ");
    gets(a);
    int len = strlen(a);
    printf("Length of the string is %d\n",len);
    for(int i=0;i<len/2;i++){
        c=a[i];
        a[i]=a[len-i-1];
        a[len-i-1] = c;
    }
    printf("Reversed string is -> %s\n",a);
    return 0;
}