//Program to print the first n prime numbers, the value of n taken from user

#include <stdio.h>

int main()
{
    int n, count = 0, prime, num = 2;
    printf("Enter number of prime numbers to be printed : ");  //taking number of prime numbers to be printed from the user
    scanf("%d", &n);
    printf("\n");
    do           //infinite while loop
    {
        prime = 1;          //Flag prime number indicator
        if (num == 2)       //2 is only even prime number, hence divisible by 2, hence special case out of iteration loop
        {
            count++;
            printf("prime number count %d : %d\n", count, num);
            num++;
            continue;
        }
        for (int i = 2; i*i<= num; i++)  //Loop for check prime number
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            count++;        //if prime, increments the counter
            printf("prime number count %d : %d\n", count, num);
        }
        num++;              //increamenter of while loop
    }while(count<n);
    printf("\nNo of prime numbers : %d\n", count);
    return 0;
}