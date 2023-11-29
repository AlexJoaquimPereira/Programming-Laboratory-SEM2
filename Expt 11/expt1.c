/*Write a C program to create a student record using structure. Take the structure members
as student-name, student-roll-no, branch, aggregate-percentage and address. Create a
single structure variable (of student type) and enter the students details and display it on
screen.*/

#include<stdio.h>

struct student
{
    char student_name[20];
    int student_roll_no;
    char branch[10];
    float aggregate_percentage;
    char address[20];
};

void main()
{
    struct student s;
    printf("Enter the following details\n");
    printf("Name: ");
    scanf("%s", s.student_name);
    printf("Roll number: ");
    scanf("%d", &s.student_roll_no);
    printf("Branch: ");
    scanf("%s", s.branch);
    printf("Percentage: ");
    scanf("%f", &s.aggregate_percentage);
    printf("Address: ");
    scanf("%s", s.address);

    printf("\nThe details of the student are\n");
    printf("Name: %s\n", s.student_name);
    printf("Roll number: %d\n", s.student_roll_no);
    printf("Branch: %s\n", s.branch);
    printf("Percentage: %.2f\n", s.aggregate_percentage);
    printf("Address: %s\n", s.address);
}