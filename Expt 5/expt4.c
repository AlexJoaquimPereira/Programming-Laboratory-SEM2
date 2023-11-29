#include<stdio.h>

void main()
{
    int n, i = 2, test = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(i < n/2)
    {
        if(n % i == 0)
        {
            test = 1;
            break;
        }
        i++;
    }
    if (test == 0)
        printf("%d is a prime number\n", n);
    else 
        printf("%d is not a prime number\n", n);
}