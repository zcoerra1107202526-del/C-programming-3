#include<stdio.h>
#include<string.h>
void main()
{
  char account[20];
clrscr();
printf("Enter account type:");
scanf("%s",&account);

if(strcmp(account,"saving")==0)
{
printf("Saving account selected");
}
else if(strcmp(account,"Current")==0)
{
printf("Current account selected");
}
else if(strcmp(account,"Salary")==0)
{
printf("Salary account selected");
}
else
{
printf("Invalid account");
}
getch();
}
