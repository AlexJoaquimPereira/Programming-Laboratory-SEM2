//Write a C program to check whether two given integer values are in the range 20 to 50. Print true
//if 1 or other is in the said range otherwise false.

#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    if ((a >= 20 && a <= 50 ) ^ (b >= 20 && b <= 50))
        printf("True");
    else 
        printf("False");
}