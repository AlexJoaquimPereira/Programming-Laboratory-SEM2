/*Matrix multiplication*/
#include <stdio.h>

void main()
{
    int a[50][50], b[50][50], c[50][50], r1, c1, r2, c2;
    printf("Enter dimensions of matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Fill matrix A\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter dimensions of matrix B: ");
    scanf("%d %d", &r2, &c2);
    printf("Fill matrix B\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }

    printf("Matrix multiplication is\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf(" %d ", c[i][j]);
        printf("\n");
    }
}
