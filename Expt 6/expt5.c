#include<stdio.h>

void main()
{
    int i, j, k;
    for(i = 1; i <= 9; i = i + 2)
    {
        for(j = (10 - i)/2; j >= 0; j--)
            printf(" ");
        for(k = 1; k <= i; k++)
            printf("*");
        printf("\n");
    }
}