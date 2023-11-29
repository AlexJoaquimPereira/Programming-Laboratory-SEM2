/*Write a C program to find the second largest element in a 1D array and print the same (INCOMPLETE).*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int sl = arr[0], l = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > l) 
        {
            sl = l;
            l = arr[i];
        }
        else if (arr[i] > sl && arr[i] < l)
            sl = arr[i];
    }

    printf("The second largest element in the array is %d\n", sl);
}