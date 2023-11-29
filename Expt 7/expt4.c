/*Write a C program to enter n elements (n value entered by user) in a 1D array, count the
number of prime numbers in the array and print the same.*/

#include <stdio.h>

void main()
{
    int n, count = 0, flag = 0;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            count++;

        flag = 0;
    }

    printf("Number of prime numbers in the array: %d\n", count);
}