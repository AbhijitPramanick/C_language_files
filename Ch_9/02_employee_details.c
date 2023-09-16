#include<stdio.h>
// #include<string.h>
struct employee{
    int code;
    float salary;
    char name[30];
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter the value of e1 salary : ");
    scanf("&f",&e1.salary);
    fflush(stdin);
    printf("Enter the value of e1 code : ");
    scanf("&d",&e1.code);
    fflush(stdin);
    printf("Enter the value of e1 name : ");
    scanf("%s", e1.name);
    fflush(stdin);

    printf("Enter the value of e2 code : ");
    scanf("&d",&e2.code);
    fflush(stdin);
    printf("Enter the value of e2 salary : ");
    scanf("&f",&e2.salary);
    fflush(stdin);
    printf("Enter the value of e2 name : ");
    scanf("%s", e2.name);
    fflush(stdin);

    printf("Enter the value of e3 code : ");
    scanf("&d",&e3.code);
    fflush(stdin);
    printf("Enter the value of e3 salary : ");
    scanf("&f",&e3.salary);
    fflush(stdin);
    printf("Enter the value of e3 name : ");
    scanf("%s", e3.name);
    fflush(stdin);

    return 0;
}