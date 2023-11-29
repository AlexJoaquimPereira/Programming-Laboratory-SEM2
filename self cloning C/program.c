#include<stdio.h>

void main()
{
    char c;
    FILE *f, *f1;
    
    f = fopen("program.c", "r");
    f1 = fopen("program.txt", "a");
    
    while ((c = getc(f)) != EOF)
    {
        fputc(c, f1);
    }

    fclose(f);
    fclose(f1);
}