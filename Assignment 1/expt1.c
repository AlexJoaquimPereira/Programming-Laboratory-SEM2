//Write a C program to compute the sum of the two input values. If the two values are the same,
// then print triple their sum.

#include<stdio.h>

 void main()
 {
    int a, b, sum;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    if (a == b)
        printf("%d\n", sum * 3);
    else
        printf("Sum: %d\n", sum);
 }