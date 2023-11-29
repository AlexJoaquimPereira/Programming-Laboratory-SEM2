// Write a C program to reverse the elements of a 1D array

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

    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("The reversed array is\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}