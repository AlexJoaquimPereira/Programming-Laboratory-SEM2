//Write a C program to display all integers within the range 100-150 whose sum of digits is an even
//number

#include<stdio.h>

void main()
{
    int n, i, sum = 0;
    for(i = 100; i <= 150; i++)
    {
        n = i;
        while (n > 0)
        {
            sum = sum + (n % 10);
            n = n / 10;
        }

        if (sum % 2 == 0)
            printf("%d ", i);
        
        sum = 0;
    }
}