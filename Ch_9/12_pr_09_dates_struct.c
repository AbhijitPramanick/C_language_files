#include<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}d;
void display(d n){
    printf("\n Date is : %d/%d/%d\n",n.day,n.month,n.year);
}
int compare(d m, d n){
    if((m.day==n.day)&&(m.month==n.month)&&(m.year==n.year)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    // d d1,d2;
    d d1 = {10,8,2022};
    d d2 = {11,8,2022};
    int check = compare(d1,d2);
    display(d1);
    display(d2 );

    if(check){
        printf("\nThe dates are equal.\n");
    }
    else{
        printf("\nThe dates are not equal.\n");
    }

    return 0;
}