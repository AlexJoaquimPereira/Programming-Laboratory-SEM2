//Write a C program to check whether a given positive number is a multiple of both 3 and 7.

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n % 7 == 0 && n % 3 == 0)
        printf("%d is a multiple of both 3 and 7\n", n);
    else
        printf("%d is not a multiple of both 3 and 7\n", n);
    
}