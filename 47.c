#include<stdio.h>
void main()
{
  float temp;
clrscr();

printf("Enter your room temp:");
scanf("%f",&temp);

if(temp<20)
{
printf("Cold");
}
else if(temp<=50)
{
printf("Normal");
}
else
{
printf("Hot");
}
  getch();
}
