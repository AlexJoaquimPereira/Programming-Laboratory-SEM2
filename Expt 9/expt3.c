//Write a C program to print the prime factors of a number using functions (NOT WORKING)

#include<stdio.h>

int prime(int i)
{
    for(int j = 2; j < i; j++)
    {
        if(i % j == 0)
            return 0;
    }
    return 1;
}

void factor(int n)
{
    printf("Prime factors are: ");
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0 && prime(i) == 1)
            printf("%d ", i);
    }
}
       
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    factor(num);
}