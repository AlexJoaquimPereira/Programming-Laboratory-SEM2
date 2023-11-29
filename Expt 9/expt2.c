//Write a C program to print the sum of n natural numbers using Recursion

#include<stdio.h>

void summation (int n, int *s)
{
    if(n > 0)
    {
        int a;
        scanf("%d", &a);
        *s = *s + a;
        summation(n - 1, s);
    }
}
        
void main()
{
    int n, sum = 0;
    printf("Enter the number of elements you want\n");
    scanf("%d", &n);
    printf("Enter the numbers\n");
    summation (n, &sum);
    printf("The sum of all numbers is %d\n", sum);
}


/* OR we can do this

int summation (int n, int a)
{
    if(n > 0)
    {
        int b;
        scanf("%d", &b);
        a = a + b;
        summation(n - 1, a);
    }
    else return a;
}

in main -> sum = summation(n, 0);

*/