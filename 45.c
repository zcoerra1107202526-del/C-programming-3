#include<stdio.h>
#include<string.h>
void main()
{
  int age;
char licence[20];
clrscr();

printf("Enter your age:");
scanf("%d",&age);

if(age<18)
{
printf("You are not eligible for driving");
}
else if(age>=18)
{
printf("Do you have Driving licence");
scanf("%s",&licence);
}

if(strcmp(licence,"yes")==0)
{
printf("You are eligible for Driving");
  }
else if(strcmp(licence,"no")==0)
  {
printf("You are not eligible for Driving");
}
  getch();
}
  
