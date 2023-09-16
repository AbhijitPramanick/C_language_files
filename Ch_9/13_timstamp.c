#include<stdio.h>
typedef struct timestampt{
    int day;
    int month;
    int year;
    int hours;
    int mins;
    int seconds;

}ts;
void display(ts m ){
    printf("The time stamp is : \n");
    printf("%d/%d/%d  %d:%d:%d\n",m.day,m.month,m.year,m.hours,m.mins,m.seconds);
}
int main(){
    ts v;
    printf("Enter the details of the time stamp :\n");
    printf("Day : ");
    scanf("%d",&v.day);
    printf("month : ");
    scanf("%d",&v.month);
    printf("year : ");
    scanf("%d",&v.year);
    printf("hours : ");
    scanf("%d",&v.hours);
    printf("mins : ");
    scanf("%d",&v.mins);
    printf("seconds : ");
    scanf("%d",&v.seconds);
    display(v);
    printf("Done !!!\n");
    return 0;
}