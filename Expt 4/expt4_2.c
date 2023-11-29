//Write a C program to find maximum number out of 4 numbers entered by user

#include <stdio.h>

void main()
{
    int a, b, c, d;
    printf("Enter 4 numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
        printf("%d is the greatest\n", a);
    else if (b > c && b > d)
        printf("%d is the greatest\n", b);
    else if (c > d)
        printf("%d is the greatest\n", c);
    else 
        printf("%d is the greatest\n", d);
}