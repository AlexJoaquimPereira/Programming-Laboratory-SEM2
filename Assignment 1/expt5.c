//Write a C program to find if a number is a prime number or not

#include<stdio.h>

void main()
{
    int n, i, test = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(i = 2; i < n/2; i++)
    {
        if(n % i == 0)
        {
            test = 1;
            break;
        }
    }
    if (test == 0)
        printf("%d is a prime number\n", n);
    else 
        printf("%d is not a prime number\n", n);
}