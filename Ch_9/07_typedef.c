#include<stdio.h>
typedef struct employee{
    int code;
    float salary;
    char name[20];
}e,f;                 //creating alias for "struct employee" (user-defined data type)
void show(f *ptr){
    printf("---------------------------------------------------------------\n");
    printf("Code : %d\n",ptr->code);
    printf("Salary : %f\n",ptr->salary);
    printf("Name : %s\n",ptr->name);
    printf("---------------------------------------------------------------\n");
    ptr->code=7890;
}
void show1(e emp){
    printf("---------------------------------------------------------------\n");
    printf("Code : %d\n",emp.code);
    printf("Salary : %f\n",emp.salary);
    printf("Name : %s\n",emp.name);
    printf("---------------------------------------------------------------\n");
    // emp.code = 456;
}
int main(){
    e e1={1423,123.4567,"Abhijit"},*ptr;
    ptr = &e1;
    printf("\nCalling the function to show the details of structure...\n");
    show(ptr);
    show1(e1);
    printf("Done!!!\n");
    printf("Code of the employee after changes : %d\n",e1.code);
    return 0;
}