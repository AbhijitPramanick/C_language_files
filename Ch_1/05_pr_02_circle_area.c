#include<stdio.h>

int main(){
    int r ;
    printf("Enter radius : ");
    scanf("%d",&r);
    float area = 3.14 * r * r;
    printf("The area of circle is : %f\n", area) ;
    int h;
    printf("Enter the height of the cylinder : ");
    scanf("%d",&h);
    printf("The volume of the cylinder is : %f\n",area*h);
    return 0;
}