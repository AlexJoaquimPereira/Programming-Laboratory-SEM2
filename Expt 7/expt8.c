/*Write a C program to swap the adjacent elements of a 1D array and print the same.*/

#include <stdio.h>

void main()
{
    int n, temp;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < (n - 1); i = i + 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("The swapped array is\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}