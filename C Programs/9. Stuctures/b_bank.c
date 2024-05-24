#include <stdio.h>
#include <conio.h>
#include <string.h>

struct customer
{
    char name[20];
    int accNo;
    int bal;
};


void cust_list(struct customer ct[], int n)
{
    int amount, i;
    printf("Enter the amount :");
    scanf("%d", &amount);
    printf("The Name and Account no. of customer :");
    for (i = 0; i < n; i++)
    {
        if (ct[i].bal <= amount)
            printf("%s\t%d\n", ct[i].name, ct[i].accNo);
    }
}

void with_depo(struct customer ct[], int n){
    int accNo, amount, a, i, b;
    printf("Enter the Account No. :");
    scanf("%d", &accNo);
    printf("Enter the amount :");
    scanf("%d", &amount);
    printf("Enter 0 for withdrawal and 1 for Deposit");
    scanf("%d", &a);
    for(i=0; i<n; i++){
        if(ct[i].accNo == accNo)
            b = i;
    }
    if (a == 1){
        ct[b].bal = ct[b].bal + amount;
        printf("The amount is Deposited.\n New Balance is %d.", ct[b].bal); 
    }
    else{
        if (ct[b].bal <= amount)
            printf("The balance is insufficient for the specified withdrawal"); 
        else{
            ct[b].bal = ct[b].bal - amount;
            printf("The amount is Withdrawal.\n New Balance is %d.", ct[b].bal); 
        }
    }
}


int main()
{
    int num, i;

    printf("Enter the number of customers :");
    scanf("%d", &num);

    struct customer cust[num];

    for (i = 0; i < num; i++)
    {
        printf("Enter the Name of customer %d :\n", i + 1);
        scanf("%s", &cust[i].name);
        printf("Enter the Account no. of customer %d\n", i + 1);
        scanf("%d", &cust[i].accNo);
        printf("Enter the Balance of customer %d :\n", i + 1);
        scanf("%d", &cust[i].bal);
    }
    i = 0;
    while (i < 3)
    {
        printf("\n\n\n\n  1. Enter the amount to get customer list below it.\n ");
        printf(" 2. Withdrawal or Deposit.\n ");
        printf(" 3. Exit\n");
        printf("Enter Your Choice :");
        scanf("%d", &i);

        if (i == 1)
            cust_list(cust, num);
        else if (i == 2)
            with_depo(cust, num);
    }

    getch();
    return 0;
}