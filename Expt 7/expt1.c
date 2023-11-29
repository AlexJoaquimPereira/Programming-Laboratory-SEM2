// Write a C program to enter n elements (n value entered by user) in a 1D array and print the
// summation of all elements of the array.

#include <stdio.h>

void main()
{
    int n, sum = 0;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    printf("The sum of the elements of the array is %d\n", sum);
}