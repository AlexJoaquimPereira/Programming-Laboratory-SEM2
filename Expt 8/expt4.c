/*Print sum of diagonal*/

#include<stdio.h>

void main()
{
    int a[50][50], r, c, sum = 0;
    printf("Enter dimensions of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Fill matrix\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++)
        sum = sum + a[i][i];

    printf("Sum of the leftmost main diagonal is %d\n", sum);
}