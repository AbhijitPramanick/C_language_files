// #include<stdio.h>
// struct employee{
//     int code;
//     float salary;
//     char name[20];
// };
// int main(){
//     struct employee e1 = {123,123.45,"Abhijit"};
//     printf("Code : %d\n",e1.code);
//     printf("salary : %f\n",e1.salary);
//     printf("name : %s\n",e1.name);
//     return 0;
// }
#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main(){
    struct employee e1={123,123.4567,"Pallabi"},e2 = {0};
    printf("Code : %d\n",e1.code);
    printf("salary : %f\n",e1.salary);
    printf("name : %s\n",e1.name);
    printf("Code : %d\n",e2.code);
    printf("salary : %f\n",e2.salary);
    printf("name : %s\n",e2.name);
    return 0;
}