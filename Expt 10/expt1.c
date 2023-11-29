/*Write a C program to perform matrix addition of 2 matrices by passing the two matrices
to a user defined function. Let the called function display the addition result.*/

#include<stdio.h>

void addition(int r, int c, int a[50][50], int b[50][50]) 
{
    int sum[50][50];
    printf("The addition of both matrices is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        { 
            sum[i][j] = a[i][j] + b[i][j];
            printf(" %d ", sum[i][j]);
        }
        printf("\n");
    }
}


void main()
{
    int a[50][50], b[50][50], r, c;
    printf("Enter dimensions of the matrices: ");
    scanf("%d %d", &r, &c);

    printf("Fill matrix A\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Fill matrix B\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    addition(r, c, a, b);
}