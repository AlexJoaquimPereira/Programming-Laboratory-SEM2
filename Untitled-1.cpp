#include<stdio.h>
#include<ctype.h>

void main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    if (isalpha(a) != 1)
    {
        printf("%c is an alphabet\n", a);
    }
    else if (isdigit(a) != 1)
    {
        printf("%c is a digit\n", a);
    }
    else 
    {
        printf("%c is a special character\n", a);
    }
}