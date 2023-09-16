#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1={123,123.45,"Abhijit"},*ptr;
    ptr = &e1;
    printf("Code : %d\n",ptr->code);
    printf("salary : %f\n",ptr->salary);
    printf("name : %s\n",ptr->name);
    return 0;
}