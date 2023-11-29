/*Write a C program to create an array of structure variables (for the above question).
Maintain 5 students’ records. Provide following menu driven options in your program.
1. Enter student details
2. Display students details
3. Search student based on student-roll-no
4. Display student details whose aggregate-percentage is above 70*/

#include <stdio.h>

struct student
{
    char student_name[20];
    int student_roll_no;
    char branch[10];
    float aggregate_percentage;
    char address[20];
};

struct student s[5];

void enter()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the following details for student no. %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].student_name);
        printf("Roll number: ");
        scanf("%d", &s[i].student_roll_no);
        printf("Branch: ");
        scanf("%s", s[i].branch);
        printf("Percentage: ");
        scanf("%f", &s[i].aggregate_percentage);
        printf("Address: ");
        scanf("%s", s[i].address);
    }
}

void display()
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nThe details of student no. %d are\n", i + 1);
        printf("Name: %s\n", s[i].student_name);
        printf("Roll number: %d\n", s[i].student_roll_no);
        printf("Branch: %s\n", s[i].branch);
        printf("Percentage: %f\n", s[i].aggregate_percentage);
        printf("Address: %s\n", s[i].address);
    }
}

void search()
{
    int roll, f = 0;
    printf("Enter the roll number: ");
    scanf("%d", &roll);
    for(int i = 0; i < 5; i++)
    {
        if(s[i].student_roll_no == roll)
        {
            printf("\nThe details of the student are\n");
            printf("Name: %s\n", s[i].student_name);
            printf("Branch: %s\n", s[i].branch);
            printf("Percentage: %f\n", s[i].aggregate_percentage);
            printf("Address: %s\n", s[i].address);
            f++;
            break;
        }
    }
    if(f == 0)
        printf("Student not found\n");
}

void display_70_plus()
{
    printf("The students scoring above 70 percent are\n");
    for(int i = 0; i < 5; i++)
    {
        if(s[i].aggregate_percentage > 70)
        {
            printf("Name: %s\n", s[i].student_name);
            printf("Roll number: %d\n", s[i].student_roll_no);
            printf("Branch: %s\n", s[i].branch);
            printf("Percentage: %f\n", s[i].aggregate_percentage);
            printf("Address: %s\n\n", s[i].address);
        }
    }
}

int main()
{
    int p;
    do
    {
        printf("1. Enter student details\n");
        printf("2. Display students details\n");
        printf("3. Search student based on student-roll-no\n");
        printf("4. Display student details whose aggregate-percentage is above 70\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &p);
        switch (p)
        {
            case 1:
                enter();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                display_70_plus();
                break;
        }
    } while (p != 5);
    return 0;
}