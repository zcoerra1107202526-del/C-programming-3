#include<stdio.h>
void main()
{
  int marks;
clrscr();
printf("Enter your marks:");
scanf("%d",&marks);

if(marks >=90)
{
printf("Grade A");
}
else if(marks >=75)
{
printf("Grade B");
}
else if(marks >=50)
{
printf("Grade C");
}
else if(marks >=40)
{
printf("Grade D");
}
  else
{
  printf("Fail");
}
getch();
}
