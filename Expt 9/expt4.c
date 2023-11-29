//Write a C program to swap 2 user entered numbers using call by reference method.

#include<stdio.h>

void swap (int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void main()
{
    int a, b;
    printf("Enter value of two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("The swapped numbers are %d and %d\n", a, b);
}