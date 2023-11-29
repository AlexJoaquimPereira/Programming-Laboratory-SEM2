//Write a C program to print n terms of Fibonacci series

#include<stdio.h>

void main()
{
    int n, i, a = 1, b = 1, temp;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("1\n1\n");
    for(i = 3; i <= n; i++)
    {
        temp = a;
        a = a + b;
        printf("%d ", a);
        b = temp;
    }
}