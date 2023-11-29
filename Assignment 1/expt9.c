//Write a C program to count the number of employees whose salary is between 10,000 to 20,000

#include<stdio.h>

void main()
{
    int employees, salary, i, n = 0;
    printf("Enter number of employees\n");
    scanf("%d", &employees);
    for(i = 1; i <= employees; i++)
    {
        printf("Enter salary of employee %d\n", i);
        scanf("%d", &salary);
        if (salary >= 10000 && salary <= 20000)
            n++;
    }
    printf("No. of employees satisfying the criteria is %d\n", n);
}