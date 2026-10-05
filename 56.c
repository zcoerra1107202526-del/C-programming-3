#include<stdio.h>
#include<string.h>
void main()
{
  char branch[20];
clrscr();
printf("Enter your branch:");
scanf("%s",&branch);

if(strcmp(branch,"Robotics")==0)
{
printf("Robotics and Automation Department");
}
else if(strcmp(branch,"Computer")==0)
{
printf("Computer Engineering Department");
}
else if(strcmp(branch,"Mechanical")==0)
{
printf("Mechanical Engineering Department");
}
else
{
printf("Department Not Found");
}
getch();
}

  
  
