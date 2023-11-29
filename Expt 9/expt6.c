//Write a C program to count the number of digits of a number using recursion

#include<stdio.h>

int counter(int n)
{
    if (n == 0)
        return 0;
    else return 1 + counter (n / 10);
}

void main()
{
    int num, count;
    printf("Enter a number\n");
    scanf("%d", &num);
    count = counter(num);
    printf("Number of digits = %d\n", count);
}