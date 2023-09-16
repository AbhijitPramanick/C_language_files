#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[30];
};
int main(){
    struct employee e1; //user defined data type

    e1.code = 123;
    e1.salary = 123.45;
    strcpy(e1.name,"Abhijit");

    printf("Code : %d\n",e1.code);
    printf("salary : %.3f\n",e1.salary);
    printf("name : %s\n",e1.name);
    printf("\nDone\n");
    return 0;
}