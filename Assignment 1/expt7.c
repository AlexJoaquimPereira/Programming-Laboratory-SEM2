//Write a C program to generate the prime numbers from 1 to N

#include<stdio.h>

void main()
{
    int n, i, j, factor = 2;
    printf("Enter the upper limit\n");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        for(j = 2; j < i; j++)
        {
            if (i % j == 0)
                factor++;
        }
        if(factor == 2)
            printf("%d ", i);
        
        factor = 2;
    }
}