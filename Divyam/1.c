/*Write a C program to create a electricity bill management system. Program should facilitate the end user to
create a separte file for each customer record entered with customer name as the file name.
customer record details should be :cname,address,and units-consumed. Program must dynamically reserve
the memory for each customer record created.Provide a menu driven o/p with following options for the program:
option 1-> To enter customer details and display separately each file as o/p
option 2-> To edit units-consumed for a customer file and also display the updated content
option 3-> To append the mode of payment to customer file & display appended content on screen*/

#include <stdio.h>
#include <string.h>

typedef struct customer
{
    char cname[20];
    char address[30];
    int units;
    char mode[10];
} custo;

void input_details();
int display(char file_name[10]);
void update();
void append();

void main()
{
    int n, i, loop = 1, op,flag=0;
    char file_name[10];
    FILE *fp;

    custo c;
    do
    {
        printf("\n****************************************\n");
        printf("\n1.Enter details and display\n");
        printf("2.Edit uints consumed and display\n");
        printf("3.Append mode of payment and display\n");
        printf("4.quit\n");
        printf("Choose option: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
        {
            printf("\nEnter the number of records:\n");
            scanf("%d", &n);
            //c = (customer *)malloc(n * sizeof(customer));
            for (i = 0; i < n; i++){
                input_details();
            }
            flag=1;
            break;
        }

        case 2:
        {
            if(flag!=1)
                {printf("First enter details\n");break;}
            else
                update();
            break;
        }

        case 3:
        {
            if(flag!=1)
                {printf("First enter details\n");break;}
            else
                append();
            break;
        }

        case 4:
            loop = 0;
            break;

        default:
            printf("Enter correct option");
            break;
        }
        fflush(stdin);
    } while (loop);
}

void input_details()
{
    printf("\n****************************************\n");
    FILE *fp;
    char file_name[10];
    custo c;
    printf("\nEnter the filename to create: ");
    scanf("%s", file_name);

    fp = fopen(file_name, "w");

    printf("\nEnter customer name :");
    scanf("%s", c.cname);
    printf("\nEnter address :");
    scanf("%s", c.address);
    printf("\nEnter units consumed : ");
    scanf("%d", &c.units);

    fprintf(fp, "%s\n%s\n%d", c.cname, c.address, c.units);

    printf("\nContents written to file successfully.....\n");
    
    fclose(fp);
    display(file_name);
}
int display(char file_name[])
{
    printf("\n****************************************\n");
    FILE *f;
    custo c;
    f=fopen(file_name,"r");
    if (f == NULL)
    {
        printf("\nFile name dose not exist\n");
        fclose(f);
    }
    else
    {
        fscanf(f,"%s\n%s\n%d",c.cname,c.address,&c.units);
        if(feof(f)){
            printf("Name: %s\nAddress: %s\nUnits %d",c.cname,c.address,c.units);
        }
        else{
            rewind(f);
            fscanf(f,"%s\n%s\n%d\n%s",c.cname,c.address,&c.units,c.mode);
            printf("Name: %s\nAddress: %s\nUnits: %d\nMode of payment: %s",c.cname,c.address,c.units,c.mode);
        };
    }
    fclose(f);
}
void update()
{
    printf("\n****************************************\n");
    FILE *f;
    custo c;
    char file_name[10];
    int temp;
    printf("\nEnter file name to edit: ");
    scanf("%s",file_name);

    f = fopen(file_name, "r");
    if(f == NULL){
        printf("\nfile dose not exist\n");
    }
    else{
        fscanf(f,"%s\n%s\n%d",c.cname,c.address,&c.units);
        printf("Enter units to update: ");

        if(feof(f)){
            fclose(f);
            f = fopen(file_name, "w");
            scanf("%d",&c.units);
            fprintf(f,"%s\n%s\n%d",c.cname,c.address,c.units);
        }
        else{
            rewind(f);
            fscanf(f,"%s\n%s\n%d\n%s",c.cname,c.address,&c.units,c.mode);
            fclose(f);
            f = fopen(file_name, "w");
            scanf("%d",&c.units);
            fprintf(f,"%s\n%s\n%d\n%s",c.cname,c.address,c.units,c.mode);
        }
        printf("Contents updated to file sucessfully....\n");
    }
    fclose(f);
    display(file_name);
}
void append()
{
    printf("\n****************************************\n");
    FILE *f;
    custo c;
    char file_name[10];
    printf("\nEnter file name to append to: ");
    scanf("%s",file_name);
    f = fopen(file_name,"r");
    if(f == NULL){
        printf("\nfile dose not exist\n");
    }
    
    else{
        fscanf(f,"%s\n%s\n%d",c.cname,c.address,&c.units);
        printf("Enter mode of payment: ");
        if(feof(f)){
            fclose(f);
            f = fopen(file_name, "a");
            scanf("%s",c.mode);
            fprintf(f,"\n%s",c.mode);
        }
        else{
            fclose(f);
            f = fopen(file_name, "w");
            scanf("%s",c.mode);
            fprintf(f,"%s\n%s\n%d\n%s",c.cname,c.address,c.units,c.mode);
        }
        
        printf("Mode of payment apppended to file sucessfully....\n");
    }
    fclose(f);
    display(file_name);
}