#include<stdio.h>
void main()
{
  int balance,amount;
clrscr();
printf("Enter account balance:");
scanf("%d",&balance);

printf("Enter Withdraw Amount:");
scanf("%d",&amount);

if(amount<0)
{
printf("Invalid amount");
}
else if(amount<balance)
{
printf("Not sufficent");
}
else
{
balance=balance-amount;
printf("Withdrawal successful\n");
        printf("Remaining Balance = %d", balance);
    }
getch();
}



