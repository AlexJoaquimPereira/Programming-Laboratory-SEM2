/*Write a C program to delete an element from a 1D array. Shift all the remaining elements one
position to the left of the deleted element.*/

#include <stdio.h>

void main()
{
    int n, num;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element you want to delete: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            for (int j = i; j < (n - 1); j++)
                arr[j] = arr[j + 1];
            break;
        }
    }

    printf("The edited array is\n");
    for (int i = 0; i < (n - 1); i++)
        printf("%d ", arr[i]);
}