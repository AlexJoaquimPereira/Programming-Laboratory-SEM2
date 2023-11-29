//Write a C program to print the factorial of a number using Recursion

#include<stdio.h>

void fibonacci (int n, int fn, int fn1)
{
    if (n > 2)
    {
        int fn2 = fn1 + fn;
        printf("%d ", fn2);
        fibonacci (n-1, fn1, fn2);
    }
}
        
void main()
{
    int fn = 0, fn1 = 1, n;
    printf("Enter the number of elements you want\n");
    scanf("%d", &n);
    printf("0 1 ");
    fibonacci (n, fn, fn1);
}