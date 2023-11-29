#include<stdio.h>

void main()
{
	int i, j;
	for(i = 1; i <= 9; i=i+2)
	{
	    for(j = 1; j <= i; j++)
	        printf("%d ", j);
	    printf("\n");
	}
	for(i=7; i>0; i = i - 2)
	{
	    for(j = 1; j <= i; j++)
	        printf("%d ", j);
	    printf("\n");
	}
}