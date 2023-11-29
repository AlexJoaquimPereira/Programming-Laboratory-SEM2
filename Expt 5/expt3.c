#include<stdio.h>

void main()
{
    int i = 1, sum = 0, avg;
    do{
        sum = sum + i;
        i++;
    } while(i <= 10);
    avg = sum / 10;
    printf("Average: %d\n", avg);
}
