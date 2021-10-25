// This C program is used to find whether a number is prime or not.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;                   // If n is divided by i so it is a composite number
            break;                     
        }
    }
    if (prime == 0 && n != 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}
