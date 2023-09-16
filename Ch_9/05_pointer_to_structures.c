#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1={123,123.45,"Abhijit"};
    struct employee *ptr;
    ptr = &e1;
    printf("Code : %d\n",(*ptr).code);
    return 0;
}