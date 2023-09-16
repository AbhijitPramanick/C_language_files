#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[30];
};
int main(){
    struct employee facebook[100];

    facebook[0].code = 100;
    fflush(stdin);
    facebook[0].salary = 100.45;
    fflush(stdin);
    strcpy(facebook[0].name,"Abhijit");
    printf("\nDone\n");
    return 0;
}