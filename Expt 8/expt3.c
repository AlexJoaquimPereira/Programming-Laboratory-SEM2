/*Symmetric or no*/

#include <stdio.h>

void main()
{
    int a[50][50], b[50][50], r, c, flag = 0;
    printf("Enter dimensions of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Fill matrix\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            b[j][i] = a[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (b[i][j] != a[i][j])
            {
                flag = 1;
                break;
            }
            
    if (flag == 1)
        printf("Matrix is not symmetric\n");
    else
        printf("Matrix is symmetric\n");
}
