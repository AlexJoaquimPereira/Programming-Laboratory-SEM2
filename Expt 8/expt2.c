/*Transpose*/

#include<stdio.h>

void main()
{
    int a[50][50], b[50][50], r, c, temp;
    printf("Enter dimensions of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Fill matrix\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            b[j][i] = a[i][j];

    printf("Matrix transpose is\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            printf(" %d ", b[i][j]);
        printf("\n");
    }
}