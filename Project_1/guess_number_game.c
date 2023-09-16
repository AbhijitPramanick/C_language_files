#include<stdio.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
int main(){
    int n,num,attempt=0;
    srand(time(0));
    n = rand()%100 + 1;
    // printf("The number is : %d\n",n);
    do{
        printf("Enter a number : ");
        scanf("%d",&num);
        if(num==n){
            printf("You have guessed the number correctly : %d\n",n);
            printf("No of attempts : %d\n",attempt);
            break;
        }
        else if(num<n){
            printf("Enter a greater number.\n");
            attempt++;
        }
        else if(num>n){
            printf("Enter a lesser number.\n");
            attempt++;
        }
    }while(num!=n);
    printf("Thank you !!!");
    getch();
    return 0;
}