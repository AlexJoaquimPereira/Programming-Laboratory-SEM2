/*Print if two 2D matrices are same*/

#include<stdio.h>

void main()
{
    int a[50][50], b[50][50], r1, c1, r2, c2, flag = 0;
    printf("Enter dimensions of matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Fill matrix A\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter dimensions of matrix B: ");
    scanf("%d %d", &r2, &c2);
    printf("Fill matrix B\n");
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
            if (b[i][j] != a[i][j])
            {
                flag = 1;
                printf("Matrices are dissimilar at (%d, %d)\n", i+1, j+1);
                break;
            }
    }
    if (flag == 0)
        printf("Elements of both matrices are the same\n");
    
}