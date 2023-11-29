/*Write a C program to demonstrate how to pass a copy of structure record to an user
defined function. (Take your own example)*/

#include<stdio.h>

struct account
{
    int account_number;
    float balance;
};

struct account balance_update(struct account xyz, float p)
{
    xyz.balance += p;
    return (xyz);
}

int main()
{
    struct account savings;
    float p;
    printf("Enter account number and existing balance\n");
    scanf("%d %f", &savings.account_number, &savings.balance);
    printf("Enter amount deposited: ");
    scanf("%f", &p);
    savings = balance_update(savings, p);
    printf("The updated balance is Rs %.2f\n", savings.balance);
}