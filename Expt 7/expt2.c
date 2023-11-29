/*Write a C program to enter n elements (n value entered by user) in a 1D array and search for
a required element in the 1D array. Print the location of the search element and if element not
found print “Element not found message”.*/

#include <stdio.h>

void main()
{
    int n, num, flag = 0;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to be searched\n");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("%d found at %d\n", num, i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Element not found\n");
}