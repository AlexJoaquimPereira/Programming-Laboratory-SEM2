//Write a C program to compute transpose of a matrix by passing it to a user defined function.

#include <stdio.h>

void transpose(int r, int c, int a[50][50]) 
{
    int t[50][50];
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) 
            t[j][i] = a[i][j];
    
    printf("Transpose of the matrix is:\n");
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
           printf("%d ", t[i][j]); 
        printf("\n");
    }
}

void main()
{
    int a[50][50], r, c;
    printf("Enter dimensions of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Fill the matrix\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    transpose(r, c, a);
}