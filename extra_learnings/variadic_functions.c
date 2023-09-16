#include<stdio.h>
#include<stdarg.h>

int sum(int count, ...){
    va_list x;
    va_start(x,count);
    int s = 0;
    for (int i=0;i<count;i++){
        s+=va_arg(x,int);
    }
    return s;
}
int main()
{
    printf("The sum is : %d\n",sum(4,6,5,2,1));
    return 0;
}