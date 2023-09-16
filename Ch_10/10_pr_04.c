#include<stdio.h>
typedef struct employee{
    char name[20];
    float salary;
}emp;
int main(){
    emp a,b;
    FILE *ptr;
    printf("Hello Boss !\nEnter the name and salary details of two of your employees:\n\n");
    printf("Enter the name of employee 1 (Word limit 20): ");
    scanf("%s",&a.name);
    printf("Enter the salary details of employee 1 (in US dollars) : ");
    scanf("%f",&a.salary);
    printf("Enter the name of employee 2 (Word limit 20): ");
    scanf("%s",&b.name);
    printf("Enter the salary details of employee 2 (in US dollars) : ");
    scanf("%f",&b.salary);

    ptr = fopen("Details_employee.txt","w");
    fprintf(ptr,"\t\t\t***Employee details*** \n\nEmployee 1 Name : %s\nEmployee 1 Salary : %f\n\nEmployee 2 name : %s\nEmployee 2 Salary : %f\n",a.name,a.salary,b.name,b.salary);
    fclose(ptr);
    
    return 0;
}