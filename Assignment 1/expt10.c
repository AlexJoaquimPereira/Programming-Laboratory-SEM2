//Write a C program to check if an entered character is an Vowels or consonants

#include <stdio.h>

void main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    if (a == 'a' || a == 'A'|| a == 'e'|| a == 'E'|| a == 'i'|| a == 'I'|| a == 'o'|| a == 'O'|| a == 'u'|| a == 'U')
        printf("%c is a vovel\n", a);
    else 
        printf("%c is a consonant\n", a);
}