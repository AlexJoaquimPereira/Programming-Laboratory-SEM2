/*Write a function “roman” to convert any given year into its roman equivalent. Use these
roman equivalent for decimal numbers:
1-I , 5-V 10-X, 50-L, 100-C, 500-D, 1000-M
Example1: roman equivalent of 1988 is MDCCCCLXXXVIII
Example 2: roman equivalent of 1525 is MDXXV*/

#include <stdio.h>

void roman(int year) 
{
    int decimal[7] = {1000, 500, 100, 50, 10, 5, 1};
    char *roman[7] = {"M", "D", "C", "L", "X", "V", "I"};
    printf("Roman equivalent of %d is ", year);
    for (int i = 0; i < 7; i++) 
    {
        while (year >= decimal[i]) 
        {
            printf("%s", roman[i]);
            year = year - decimal[i];
        }
    }
    printf("\n");
}

void main() 
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    roman(year);
}