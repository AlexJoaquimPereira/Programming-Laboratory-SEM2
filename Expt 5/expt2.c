#include<stdio.h>

void main()
{
    int num, n, i = 1, revno = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        revno = revno * 10;
        revno = revno + (n % 10);
        n = n / 10;
        i++;
    }

    if (revno == num)
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);
}