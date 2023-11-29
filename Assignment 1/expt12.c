//Write a C program to count frequency of digits in a given number and print it

#include <stdio.h>

void main()
{
    int num, i, tally = 0, n;
    printf("Enter a number\n");
    scanf("%d", &num);
    for (i = 0; i <= 9; i++)
    {
        n = num;
        while (n > 0)
        {
            if (n % 10 == i)
                tally++;
            n = n / 10;
        }
        printf("Frequency of %d in given number: %d\n", i, tally);
        tally = 0;
    }
}