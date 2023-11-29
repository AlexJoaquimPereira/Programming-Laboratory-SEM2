#include<stdio.h>

void main()
{
	int i, j;
	for(i = 1; i <= 5; i++)
	{
	    for(j = 1; j <= i; j++)
	        printf("%d", j);
	    for(j = 1; j <= 2*(5-i); j++)
	        printf(" ");
	    for(j = i ; j > 0 ; j--)
	        printf("%d", j);
	    printf("\n");
	}
}