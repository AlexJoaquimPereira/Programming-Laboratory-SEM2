//Write a C program to check if an entered character if lowercase or upper case.

#include<stdio.h>

void main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("%c is lowercase\n", a);
    else 
        printf("%c is uppercase\n", a);
}