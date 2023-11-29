//Write a C program to check if a number is an Armstrong number of not
//( If number is equal to sum of all digits where each digit is raise to 3 e.g : 153, 370, 371.)

#include <stdio.h>

void main()
{
    int num, digit, sum = 0, num1;
    printf("Enter a number\n");
    scanf("%d", &num);
    num1 = num;
    while (num1 > 0)
    {
        digit = num1 % 10;
        digit = digit * digit * digit;
        sum = sum + digit;
        num1 = num1 / 10;
    }
    if (num == sum)
        printf("%d is an Armstrong number\n", num);
    else 
        printf("%d is not an Armstrong number\n", num);
}