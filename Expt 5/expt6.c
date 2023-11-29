//Write a C program to enter a number and print it in words

#include<stdio.h>

void main()
{
    int num, n, i = 1, t, revno = 0, r;
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
    
    n = revno;

    while (n > 0)
    {
        t = n % 10;
        switch (t)
        {
            case 1:
                printf(" One ");
                break;
            case 2:
                printf(" Two ");
                break;
            case 3:
                printf(" Three ");
                break;
            case 4:
                printf(" Four ");
                break;
            case 5:
                printf(" Five ");
                break;
            case 6:
                printf(" Six ");
                break;
            case 7:
                printf(" Seven ");
                break;
            case 8:
                printf(" Eight ");
                break;
            case 9:
                printf(" Nine ");
                break;
            case 0:
                printf(" Zero ");
                break;
        }
        n = n /10;
    }
}