/*Write a C program to compare two 1D array’s, print if both array elements are the same or
not.*/

#include <stdio.h>

void main()
{
    int n, m, flag = 0;
    printf("Enter number of elements in first array\n");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements of the first array\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter number of elements in second array\n");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements of the first array\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != arr2[i])
            {
                printf("Elements at %d are different\n", i + 1);
                flag = 1;
                break;
            }
        }
    }
    else
        printf("Arrays have dissimilar lenghts\n");

    if (flag == 0)
        printf("Both arrays have same elements\n");
}