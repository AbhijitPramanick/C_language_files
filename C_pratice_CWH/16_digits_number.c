// C program to find the number of digits of a number
#include <stdio.h>

int main()
{
    int n, m, count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    m = n;
    if (n == 0)
    {
        printf("No of digits in %d is -> 1 digits.\n", n);
    }
    else
    {
        while (m)
        {
            m /= 10;
            count++;
        }
        printf("No of digits in %d is -> %d digits.\n", n, count);
    }
    return 0;
}