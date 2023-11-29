//Write a C program to reverse a 4 digit number.

#include <stdio.h>

void main()
{
    int num, n = 0;
    printf("Enter a 4 digit number\n");
    scanf("%d", &num);
    while (num > 0)
    {
        n = n * 10;
        n = n + (num % 10);
        num = num / 10;
    }
    printf("The reversed number is %d\n", n);
}