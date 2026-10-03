#include<stdio.h>
void main()
{
  int hours,fees;
clrscr();
printf("Enter parking hours:");
scanf("%d",&hours);

if(hours<=1)
{
printf("Fee=20");
}
else if(hours<=2)
{
printf("Fee=40");
}
else if(hours<=3)
{
printf("Fee=60");
}
else
{
printf("Fee=100");
}
getch();
}
