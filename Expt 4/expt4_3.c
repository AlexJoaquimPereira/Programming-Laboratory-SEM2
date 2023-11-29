//Write a C program to implement Calculator program using switch case statement

#include<stdio.h>

void main()
{
    int a, b, s;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("Enter the operation you want to do\n");
    printf("1. Addition 2. Subtraction 3. Multiplication 4. Division\n");
    scanf("%d", &s);
    
    switch (s)
    {  
        case 1:
            printf("%d + %d = %d", a, b, a+b);
            break;
        case 2:
            printf("%d - %d = %d", a, b, a-b);
            break;
        case 3:
            printf("%d * %d = %d", a, b, a*b);
            break;
        case 4:
            printf("%d / %d = %d", a, b, a/b);
    }
}