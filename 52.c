#include<stdio.h>
#include<string.h>
void main()
{
  char password[20];
  clrscr();
printf("Enter password:");
scanf("%s",&password);

  if(strcmp(password,"Robot@123")==0)
  {
    printf("Correct passoword");
  }
  else
  {
    printf("Incorrect password");
  }
  getch();
}
