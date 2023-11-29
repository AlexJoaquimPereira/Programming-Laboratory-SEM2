#include<stdio.h>

void main()
{
	int i, k=1, j;
	for(i=1; i <=5;i++)
	{
	    for(j = 1; j <= i; j++)
	    {
	        printf("%d ", k);
	        k++;
	    }
	    printf("\n");
	}
}