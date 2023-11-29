//Write a C program to print the average of first 5 even numbers from 1 to 10

#include<stdio.h>

void main()
{
    int i, sum = 0, avg;
    for(i = 2; i <= 10; i = i + 2)
        sum = sum + i;
    avg = sum / 5;
    printf("Average: %d\n", avg);
}
