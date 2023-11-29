#include<stdio.h>

void main()
{
    int i, j, k;
    for(i = 1; i <= 5; i++)
    {
        for(j = 6 - i; j > 0; j--)
            printf("*");
        for(k = (i*2)-2; k > 0; k--)
            printf(" ");
        for(j = 6 - i; j > 0; j--)
            printf("*");          
        printf("\n");
    }
    for(i = 5; i > 0; i--)
    {
        for(j = 1; j <= 6 - i; j++)
            printf("*");
        for(k = (i*2)-2; k > 0; k--)
            printf(" ");
        for(j = 1; j <= 6 - i; j++)
            printf("*");          
        printf("\n");
    }
}