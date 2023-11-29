/*Write a C program to demonstrate the size of a union type record.(Use the sizeof
operator) Take your own example.*/

#include<stdio.h>

union subject
{
   int marks;
   float percentage;
   char grade;
};

int main()
{
    int size = sizeof(union subject);
    printf("Size of union subject is %d", size);
}